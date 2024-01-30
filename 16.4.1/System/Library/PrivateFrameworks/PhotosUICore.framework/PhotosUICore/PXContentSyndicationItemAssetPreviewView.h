@class NSArray, PXFocusInfo, NSAttributedString, PXRegionOfInterest;

@interface PXContentSyndicationItemAssetPreviewView : UIView

@property (retain, nonatomic) NSArray *imageViews;
@property (readonly) long long maximumPreviewCount;
@property (nonatomic) long long visiblePreviewCount;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (copy, nonatomic) NSAttributedString *overlayTitle;
@property (readonly, copy, nonatomic) PXRegionOfInterest *regionOfInterestForOneUpTransition;
@property (readonly, nonatomic) PXFocusInfo *focusInfo;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)setPreviewImage:(id)a0 atIndex:(long long)a1;

@end
