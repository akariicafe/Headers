@class NSString, UIImage;

@interface MagnifierSupport.ViewSnapshotsButton : UIControl {
    void /* unknown type, empty encoding */ label;
    void /* unknown type, empty encoding */ icon;
    void /* unknown type, empty encoding */ containerView;
    void /* unknown type, empty encoding */ enabledColor;
    void /* unknown type, empty encoding */ disabledColor;
    void /* unknown type, empty encoding */ dimmedColor;
    void /* unknown type, empty encoding */ isDimmed;
    void /* unknown type, empty encoding */ contentSizeCategorySubscription;
    void /* unknown type, empty encoding */ snapshotCount;
    void /* unknown type, empty encoding */ rotationSubscription;
}

@property (nonatomic, copy) NSString *largeContentTitle;
@property (nonatomic, retain) UIImage *largeContentImage;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)dragExited:(id)a0;
- (void)dragReturned:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
