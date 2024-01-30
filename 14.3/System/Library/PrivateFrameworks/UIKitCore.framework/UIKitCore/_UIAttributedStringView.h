@class NSAttributedString;

@interface _UIAttributedStringView : UIView {
    NSAttributedString *_string;
}

+ (Class)layerClass;

- (void)setString:(id)a0;
- (void)_updateContentsScale:(id)a0;
- (void)setTextRotationAngle:(double)a0;
- (void)dealloc;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
