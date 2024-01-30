@class NSDateFormatter, UIImageView, CAShapeLayer, UIView, PXPersonImageRequest, UILabel;
@protocol PXPerson;

@interface PXPeopleSuggestionView : PXSmartScaleView

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } faceRect;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *suggestionView;
@property (retain, nonatomic) UIView *dimView;
@property (retain, nonatomic) CAShapeLayer *spotlightLayer;
@property (nonatomic) BOOL needsSpotlightUpdate;
@property (nonatomic) BOOL validSpotlight;
@property (retain, nonatomic) PXPersonImageRequest *imageRequest;
@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (retain, nonatomic) UILabel *dateLabel;
@property (readonly, nonatomic) id<PXPerson> suggestion;

- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_scaledFaceRect;
- (void)_updateDateFieldWithSuggestion:(id)a0;
- (double)_faceScale;
- (void)_updateSpotlightAnimated:(BOOL)a0;
- (void)_updateSuggestionImageWithAnimatedSpotlight:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)setSuggestion:(id)a0 animated:(BOOL)a1 withCompletion:(id /* block */)a2;
- (void)viewScaleDidChange;

@end
