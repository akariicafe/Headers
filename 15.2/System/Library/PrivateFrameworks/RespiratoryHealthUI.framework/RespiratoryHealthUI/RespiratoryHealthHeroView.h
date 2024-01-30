@class UIImageView, RespiratoryHealthHeroCountdownLabel;

@interface RespiratoryHealthHeroView : UIView {
    struct CGSize { double width; double height; } _watchImageSize;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _watchImageMediumFrame;
    UIImageView *_watchImageView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _heroImageMediumFrame;
    UIImageView *_heroImageView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _countdownLabelMediumFrame;
    RespiratoryHealthHeroCountdownLabel *_countdownLabel;
}

@property (nonatomic) double preferredWidth;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (id)init;
- (double)validScaleFactorForCandidate:(double)a0;
- (void)_updateHeroUIWithScaleFactor:(double)a0;

@end
