@interface CKTranscriptCell : CKEditableCollectionViewCell

@property (nonatomic) BOOL wantsDrawerLayout;
@property (nonatomic) char orientation;
@property (nonatomic) double drawerPercentRevealed;
@property (nonatomic) double associatedItemOffset;
@property (nonatomic) BOOL shouldConfigureForDarkFSM;
@property (nonatomic) long long insertionType;
@property (nonatomic) double insertionDuration;
@property (nonatomic) double insertionBeginTime;
@property (nonatomic) BOOL insertingBeforeReplyPreview;
@property (nonatomic) BOOL insertingWithReplyPreview;
@property (nonatomic, getter=suppressesAnimationsForLineUpdates) BOOL suppressAnimationsForLineUpdates;

- (void)configureForChatItem:(id)a0 context:(id)a1;
- (void)layoutSubviewsForDrawer;
- (void)layoutSubviewsForAlignmentContents;
- (void)clearFilters;
- (void)addFilter:(id)a0;
- (void)layoutSubviewsForContents;
- (void)performInsertion:(id /* block */)a0;
- (void)prepareForReuse;
- (void)performRemoval:(id /* block */)a0;
- (void)performReload:(id /* block */)a0 completion:(id /* block */)a1;
- (void)performHide:(id /* block */)a0;
- (void)performReveal:(id /* block */)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
