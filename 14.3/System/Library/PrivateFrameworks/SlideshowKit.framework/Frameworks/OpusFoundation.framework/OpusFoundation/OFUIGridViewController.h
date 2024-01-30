@class NSOperationQueue, OFUIGridView, NSString;

@interface OFUIGridViewController : OFUIViewController <OFUIGridViewDataSource, UIScrollViewDelegate, OFUIWindowDraggingSource> {
    unsigned long long _gridViewStyle;
}

@property (retain, nonatomic) OFUIGridView *gridView;
@property (readonly, retain, nonatomic) NSOperationQueue *operationQueue;
@property (nonatomic) BOOL hideWhenDeviceRotates;
@property (nonatomic) BOOL maintainPercentageScrolledWhenDeviceRotates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)gridViewClass;

- (void)willMoveToParentViewController:(id)a0;
- (void)willRotateToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)setEditing:(BOOL)a0;
- (void)didRotateFromInterfaceOrientation:(long long)a0;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (id)initWithStyle:(unsigned long long)a0;
- (id)init;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)commonInit;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)a0;
- (void)didReceiveMemoryWarning;
- (void)viewWillUnload;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidLoad;
- (struct CGPoint { double x0; double x1; })draggingSource:(id)a0 badgeCenterForItem:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })draggingSource:(id)a0 originalFrameForItem:(id)a1;
- (void)draggingSource:(id)a0 prepareItem:(id)a1;
- (void)draggingSource:(id)a0 cleanupItem:(id)a1;
- (void)updateDisplayedCellOperationsPriority:(id)a0;
- (long long)numberOfCellsInGridView:(id)a0;
- (id)gridView:(id)a0 cellAtIndex:(unsigned long long)a1;
- (void)updateDisplayedCellsOperationsPriority;
- (void)cancelAllOperations:(BOOL)a0;

@end
