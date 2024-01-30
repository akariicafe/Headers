@class UIImageView, UIImage;

@interface PKDrawingAdjustmentKnob : UIView {
    UIImageView *_knobView;
    UIImage *_knobImage;
    UIImage *_knobImageFlipped;
}

+ (double)leftMargin;

- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
