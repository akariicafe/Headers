@class CADisplayLink;

@interface IMDisplayLink_iOS : IMDisplayLink

@property (retain, nonatomic) CADisplayLink *displayLink;

- (void)schedule;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0 selector:(SEL)a1;
- (void)invalidate;
- (BOOL)isValid;

@end
