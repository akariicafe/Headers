@class NSString, NSArray;

@interface EKEventAttachmentDetailItem : EKEventDetailItem <EKEventAttachmentCellControllerDelegate> {
    NSArray *_cellControllers;
    BOOL _visibilityChanged;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasDetailViewControllerAtIndex:(unsigned long long)a0;
- (void)setEvent:(id)a0 store:(id)a1;
- (void)eventViewController:(id)a0 didSelectSubitem:(unsigned long long)a1;
- (BOOL)configureWithCalendar:(id)a0 preview:(BOOL)a1;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void)_setUpCellControllers;
- (id)owningEventForAttachmentCellController:(id)a0;
- (void).cxx_destruct;
- (BOOL)detailItemVisibilityChanged;
- (unsigned long long)numberOfSubitems;
- (void)dealloc;
- (void)reset;
- (id)parentViewControllerForAttachmentCellController:(id)a0;
- (void)_cleanUpCellControllers;

@end
