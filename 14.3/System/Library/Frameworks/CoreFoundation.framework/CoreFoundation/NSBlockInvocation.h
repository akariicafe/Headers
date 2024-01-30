@interface NSBlockInvocation : NSInvocation

- (void)invokeSuper;
- (SEL)selector;
- (void)setSelector:(SEL)a0;
- (void)invoke;
- (void)invokeUsingIMP:(void /* function */ *)a0;

@end
