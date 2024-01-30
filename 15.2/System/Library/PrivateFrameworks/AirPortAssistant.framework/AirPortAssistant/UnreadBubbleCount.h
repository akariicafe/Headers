@interface UnreadBubbleCount : UIView {
    struct CGSize { double width; double height; } _textSize;
}

@property (nonatomic) long long count;
@property (nonatomic) BOOL isSelected;

+ (int)initImageCache;
+ (void)deallocImageCache;

- (void)layoutSubviews;
- (void)calculateTextMetrics;
- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isHighlighted;
- (void)dealloc;

@end
