@class NSTimer, NSMutableIndexSet;

@interface WFQuickLookController : QLPreviewController <WFQuickLookRefreshing>

@property (retain, nonatomic) NSMutableIndexSet *indexesPendingRefresh;
@property (retain, nonatomic) NSTimer *indexTimer;
@property (nonatomic) long long lastIndex;
@property (nonatomic, getter=isEmbedded) BOOL embedded;

- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)activityItemForDocumentInteractionController:(id)a0;
- (void)_updateAppearance:(BOOL)a0;
- (void)updateCurrentIndex;
- (void)wf_refreshPreviewItemAtIndex:(long long)a0;

@end
