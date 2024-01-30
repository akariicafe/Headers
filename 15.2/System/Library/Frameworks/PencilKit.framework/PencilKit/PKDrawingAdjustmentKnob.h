@class UIImageView, UIImage;

@interface PKDrawingAdjustmentKnob : UIView {
    UIImageView *_knobView;
    UIImage *_knobImage;
    UIImage *_knobImageFlipped;
}

+ (double)leftMargin;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)init;

@end
