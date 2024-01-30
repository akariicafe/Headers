@class CADisplayLink;

@interface IMDisplayLink_iOS : IMDisplayLink

@property (retain, nonatomic) CADisplayLink *displayLink;

- (void)schedule;
- (BOOL)isValid;
- (void)invalidate;
- (id)initWithTarget:(id)a0 selector:(SEL)a1;
- (void).cxx_destruct;

@end
