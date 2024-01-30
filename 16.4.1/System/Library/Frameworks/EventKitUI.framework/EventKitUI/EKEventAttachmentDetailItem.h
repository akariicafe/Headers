@class NSString, NSArray;

@interface EKEventAttachmentDetailItem : EKEventDetailItem <EKEventAttachmentCellControllerDelegate> {
    NSArray *_cellControllers;
    BOOL _visibilityChanged;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configureWithCalendar:(id)a0 preview:(BOOL)a1;
- (BOOL)hasDetailViewControllerAtIndex:(unsigned long long)a0;
- (void)_cleanUpCellControllers;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (BOOL)detailItemVisibilityChanged;
- (void)_setUpCellControllers;
- (void)dealloc;
- (id)owningEventForAttachmentCellController:(id)a0;
- (unsigned long long)numberOfSubitems;
- (id)parentViewControllerForAttachmentCellController:(id)a0;
- (void).cxx_destruct;
- (void)setEvent:(id)a0 store:(id)a1;
- (void)reset;
- (void)eventViewController:(id)a0 didSelectSubitem:(unsigned long long)a1;

@end
