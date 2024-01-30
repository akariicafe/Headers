@class PXImportItemViewModel, NSString, UIActivityIndicatorView;
@protocol PUImportOneUpScrubberCellDisplayDelegate;

@interface PUImportOneUpScrubberCell : PUReviewScrubberCell <PXChangeObserver>

@property (readonly, nonatomic) UIActivityIndicatorView *spinner;
@property (nonatomic) BOOL needsBadgeUpdate;
@property (nonatomic) long long thumbnailRequestID;
@property (weak, nonatomic) id<PUImportOneUpScrubberCellDisplayDelegate> displayDelegate;
@property (retain, nonatomic) PXImportItemViewModel *importItem;
@property (nonatomic) long long badgeType;
@property (nonatomic) BOOL selectable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)emptyThumbnailBackgroundColor;

- (void).cxx_destruct;
- (void)dealloc;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)prepareForReuse;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_createSpinnerIfNecessary;
- (void)updateBadgeUIIfNeeded;
- (void)refreshThumbnail;
- (void)updateToThumbnail:(id)a0;
- (void)_commonPUImportOneUpScrubberCellInitialization;

@end
