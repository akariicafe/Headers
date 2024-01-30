@class NUIContainerBoxView, SearchUIPersonHeaderViewController, NSString, SFPersonHeaderCardSection;

@interface SearchUIPersonHeaderCardSectionView : SearchUICardSectionView <CNGroupIdentityHeaderViewControllerDelegate, SKStatusSubscriptionServiceDelegate>

@property (retain) SearchUIPersonHeaderViewController *viewController;
@property (retain) NUIContainerBoxView *boxView;
@property (retain) SFPersonHeaderCardSection *section;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsRecyclingForCardSection:(id)a0;
+ (int)defaultSeparatorStyleForCardSection:(id)a0;
+ (id)contactWithFullName:(id)a0;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })layoutMargins;
- (void)updateWithRowModel:(id)a0;
- (void).cxx_destruct;
- (void)groupIdentityHeaderViewController:(id)a0 willPresentDisambiguationUIForActionType:(id)a1;
- (void)groupIdentityHeaderViewController:(id)a0 didPerformActionOfType:(id)a1 fromDisambiguation:(BOOL)a2;
- (id)embeddedViewController;
- (id)setupContentView;
- (void)updateWithContact:(id)a0 person:(id)a1;
- (void)updateWithPerson:(id)a0;
- (void)sendCommandEngagementFeedbackWithType:(id)a0 didSelectFromOptionsMenu:(BOOL)a1 didDisplayHandleOptions:(BOOL)a2 destination:(unsigned long long)a3;

@end
