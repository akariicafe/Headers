@class PKDrawingAdjustmentKnob, UIView;

@interface PKTextAttachmentDrawingResizeView : UIView

@property (nonatomic) BOOL top;
@property (retain, nonatomic) PKDrawingAdjustmentKnob *knobView;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) UIView *separatorHighlightedView;
@property (nonatomic) BOOL highlighted;
@property (nonatomic) BOOL enabled;
@property (readonly, nonatomic) BOOL shown;

- (id)init:(BOOL)a0;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (double)resizeContentInset;
- (void)show:(BOOL)a0 enabled:(BOOL)a1 animated:(BOOL)a2;

@end
