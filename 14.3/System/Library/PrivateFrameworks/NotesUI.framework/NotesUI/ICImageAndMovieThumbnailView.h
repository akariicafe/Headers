@class UIColor, NSMutableDictionary, UIImageView, UIImage, UIView, NSLayoutConstraint, ICLabel;

@interface ICImageAndMovieThumbnailView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) NSLayoutConstraint *imageViewLeftLayoutConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imageViewRightLayoutConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imageViewBottomLayoutConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imageViewTopLayoutConstraint;
@property (retain, nonatomic) UIView *movieFooter;
@property (retain, nonatomic) ICLabel *movieDurationLabel;
@property (retain, nonatomic) NSMutableDictionary *hairlineLayers;
@property (retain, nonatomic) NSMutableDictionary *hairlineColors;
@property (nonatomic) BOOL showMovieDuration;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) unsigned long long imageScaling;
@property (nonatomic) double imageInset;
@property (nonatomic) BOOL showAsMovie;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } movieDuration;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) BOOL hairlineWidthUnitIsInPoint;
@property (nonatomic) unsigned long long hairlineEdges;
@property (nonatomic) unsigned long long edgesToRemoveStartPoint;
@property (nonatomic) unsigned long long edgesToRemoveEndPoint;
@property (nonatomic) double mininumScaleFactor;
@property (nonatomic) BOOL forceSquareImageAspectRatio;

- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setCornerRadius:(double)a0;
- (double)cornerRadius;
- (void)commonInit;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setImage:(id)a0;
- (double)pixelWidth;
- (id)image;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 showMovieDuration:(BOOL)a1;
- (void)setupMovieFooter;
- (BOOL)usesSeparateLayersForHairlines;
- (void)updateHairlineFrames;
- (void)updateDurationLabel;
- (void)updateHairline;
- (BOOL)usesSeparateLayerForHairlineEdge:(unsigned long long)a0;
- (double)hairlineWidthInPoint;
- (double)backingScale;
- (id)hairlineLayerForEdge:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameByApplyingVerticalReductionTo:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 edge:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameByApplyingHorizontalReductionTo:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 edge:(unsigned long long)a1;
- (double)imageInset;
- (void)setImageInset:(double)a0;
- (void)setHairlineColor:(id)a0 forEdges:(unsigned long long)a1;

@end
