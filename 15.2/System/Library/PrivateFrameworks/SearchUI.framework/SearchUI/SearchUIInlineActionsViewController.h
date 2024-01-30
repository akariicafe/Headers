@class CNContactInlineActionsViewController, NSString, CNActionView;

@interface SearchUIInlineActionsViewController : SearchUIAccessoryViewController <CNContactInlineActionsViewControllerDelegate, CNUIObjectViewControllerDelegate, CNActionViewDelegate, NUIContainerViewDelegate>

@property (retain, nonatomic) CNActionView *messageButton;
@property (retain, nonatomic) CNContactInlineActionsViewController *inlineActionsViewController;
@property (retain, nonatomic) CNActionView *directionsButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsRowModel:(id)a0;
+ (void)clearInlineActionsCache;
+ (id)inlineActionsCache;

- (id)hostingViewControllerForController:(id)a0;
- (void)updateWithContacts:(id)a0;
- (void)tlk_updateForAppearance:(id)a0;
- (void)updateWithRowModel:(id)a0;
- (id)setupView;
- (void).cxx_destruct;
- (void)contactInlineActionsViewController:(id)a0 willPerformActionOfType:(id)a1;
- (struct CGSize { double x0; double x1; })containerView:(id)a0 systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a1 forArrangedSubview:(id)a2;
- (void)didPressActionView:(id)a0 longPress:(BOOL)a1;
- (unsigned long long)type;

@end
