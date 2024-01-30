@interface CGColorWrapper : NSObject {
    struct CGColor { } *_color;
}

@property (readonly, nonatomic) struct CGColor { } *color;

- (id)initWithCGColor:(struct CGColor { } *)a0;
- (void)dealloc;

@end
