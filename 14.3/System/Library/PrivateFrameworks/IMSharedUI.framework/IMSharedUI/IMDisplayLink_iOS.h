@class CADisplayLink;

@interface IMDisplayLink_iOS : IMDisplayLink

@property (retain, nonatomic) CADisplayLink *displayLink;

- (void)schedule;
- (void).cxx_destruct;
- (BOOL)isValid;
- (id)initWithTarget:(id)a0 selector:(SEL)a1;
- (void)invalidate;

@end
