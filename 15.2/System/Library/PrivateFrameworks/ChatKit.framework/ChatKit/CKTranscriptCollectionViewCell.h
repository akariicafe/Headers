@class UILabel, NSString;

@interface CKTranscriptCollectionViewCell : UICollectionViewCell <CKTranscriptCellProtocol, CKTranscriptCollectionViewCellProtocol>

@property (retain, nonatomic) UILabel *debugLabel;
@property (nonatomic) BOOL wantsDrawerLayout;
@property (nonatomic) char orientation;
@property (nonatomic) double drawerPercentRevealed;
@property (nonatomic) double associatedItemOffset;
@property (nonatomic) BOOL isInReplyContext;
@property (nonatomic) BOOL isAnimatingInDarkEffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;

- (void)layoutSubviews;
- (void)layoutSubviewsForContents;
- (void)layoutSubviewsForAlignmentContents;
- (void)performInsertion:(id /* block */)a0;
- (void)configureForChatItem:(id)a0 context:(id)a1;
- (void)layoutSubviewsForDrawer;
- (void)addFilter:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)performReload:(id /* block */)a0 completion:(id /* block */)a1;
- (void)performRemoval:(id /* block */)a0;
- (void)performHide:(id /* block */)a0;
- (void)performReveal:(id /* block */)a0;
- (void)clearFilters;

@end
