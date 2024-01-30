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

- (id)initWithCoder:(id)a0;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setImage:(id)a0;
- (double)cornerRadius;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)image;
- (void).cxx_destruct;
- (void)setCornerRadius:(double)a0;
- (double)pixelWidth;
- (double)imageInset;
- (double)backingScale;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameByApplyingHorizontalReductionTo:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 edge:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameByApplyingVerticalReductionTo:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 edge:(unsigned long long)a1;
- (id)hairlineLayerForEdge:(unsigned long long)a0;
- (double)hairlineWidthInPoint;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 showMovieDuration:(BOOL)a1;
- (void)setHairlineColor:(id)a0 forEdges:(unsigned long long)a1;
- (void)setImageInset:(double)a0;
- (void)setupMovieFooter;
- (void)updateDurationLabel;
- (void)updateHairline;
- (void)updateHairlineFrames;
- (BOOL)usesSeparateLayerForHairlineEdge:(unsigned long long)a0;
- (BOOL)usesSeparateLayersForHairlines;

@end
