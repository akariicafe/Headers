@class UIView, NSString, CNContactInlineActionsViewController;

@interface SearchUIInlineActionsViewController : SearchUIAccessoryViewController <CNContactInlineActionsViewControllerDelegate, CNUIObjectViewControllerDelegate, CNActionViewDelegate, NUIContainerViewDelegate>

@property (retain, nonatomic) CNContactInlineActionsViewController *inlineActionsViewController;
@property (retain, nonatomic) UIView *messageButton;
@property (retain, nonatomic) UIView *directionsButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsRowModel:(id)a0;
+ (void)clearInlineActionsCache;
+ (id)inlineActionsCache;
+ (id)directionsButtonImage;

- (void)updateWithRowModel:(id)a0;
- (void).cxx_destruct;
- (void)contactInlineActionsViewController:(id)a0 willPerformActionOfType:(id)a1;
- (void)updateWithContacts:(id)a0;
- (id)hostingViewControllerForController:(id)a0;
- (void)didPressActionView:(id)a0 longPress:(BOOL)a1;
- (unsigned long long)type;
- (id)setupView;
- (void)updateWithContact:(id)a0;
- (struct CGSize { double x0; double x1; })containerView:(id)a0 systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a1 forArrangedSubview:(id)a2;

@end
