@interface UnreadBubbleCount : UIView {
    struct CGSize { double width; double height; } _textSize;
}

@property (nonatomic) long long count;
@property (nonatomic) BOOL isSelected;

+ (void)deallocImageCache;
+ (int)initImageCache;

- (BOOL)isHighlighted;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)calculateTextMetrics;

@end
