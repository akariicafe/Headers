@class MRUControlCenterButton, UICollectionView, MRUVisualStylingProvider, UICollectionViewFlowLayout, UIView;

@interface MRUControlCenterView : UIView

@property (retain, nonatomic) UIView *materialView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *alertView;
@property (readonly, nonatomic) UIView *containerView;
@property (readonly, nonatomic) UICollectionView *collectionView;
@property (readonly, nonatomic) UICollectionViewFlowLayout *collectionViewLayout;
@property (readonly, nonatomic) MRUControlCenterButton *moreButton;
@property (readonly, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic) long long state;
@property (nonatomic, getter=isTransitioning) BOOL transitioning;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } transitionFrame;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL showMoreButton;
@property (nonatomic) BOOL showAlertView;
@property (nonatomic) struct CGSize { double width; double height; } forcedContentSize;

- (void).cxx_destruct;
- (void)updateVisibility;
- (void)updateCollectionViewContentInset;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setStylingProvider:(id)a0;
- (void)layoutSubviewsHorizontal;
- (void)layoutSubviewsVertical;
- (void)layoutSubviewsIPad;

@end
