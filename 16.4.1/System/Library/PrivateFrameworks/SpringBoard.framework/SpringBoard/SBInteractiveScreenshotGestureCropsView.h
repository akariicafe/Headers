@class UIColor, NSArray, UIView, NSObject;
@protocol OS_dispatch_queue;

@interface SBInteractiveScreenshotGestureCropsView : UIView {
    UIView *_bottomLeftCornerHorizontalView;
    UIView *_bottomLeftCornerVerticalView;
    UIView *_bottomRightCornerHorizontalView;
    UIView *_bottomRightCornerVerticalView;
    UIView *_topLeftCornerHorizontalView;
    UIView *_topLeftCornerVerticalView;
    UIView *_topRightCornerHorizontalView;
    UIView *_topRightCornerVerticalView;
    UIView *_bottomLineView;
    UIView *_bottomLineGrabberView;
    UIView *_leftLineView;
    UIView *_leftLineGrabberView;
    UIView *_rightLineView;
    UIView *_rightLineGrabberView;
    UIView *_topLineView;
    UIView *_topLineGrabberView;
    NSArray *_cornerViews;
    NSArray *_lineViews;
    NSArray *_lineGrabberViews;
    NSObject<OS_dispatch_queue> *_accessQueue;
    double _queue_displayScale;
}

@property (nonatomic) double cornerAlpha;
@property (nonatomic) double cornerEdgeLength;
@property (retain, nonatomic) UIColor *cornerColor;
@property (nonatomic) double lineGrabberAlpha;
@property (nonatomic) double lineGrabberEdgeLength;
@property (retain, nonatomic) UIColor *lineGrabberColor;
@property (nonatomic) double grabberLineWidth;
@property (nonatomic) double lineAlpha;
@property (nonatomic) double lineWidth;
@property (retain, nonatomic) UIColor *lineColor;
@property (retain, nonatomic) id cropsCompositingFilter;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setPresentationValue:(id)a0 forKey:(id)a1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_updateGeometryForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 shouldUsePresentationValues:(BOOL)a1;
- (void)_updateGeometryOrDeferLayoutUsingModelBounds;

@end
