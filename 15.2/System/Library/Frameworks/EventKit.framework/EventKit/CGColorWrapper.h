@interface CGColorWrapper : NSObject {
    struct CGColor { } *_color;
}

@property (readonly, nonatomic) struct CGColor { } *color;

- (void)dealloc;
- (id)initWithCGColor:(struct CGColor { } *)a0;

@end
