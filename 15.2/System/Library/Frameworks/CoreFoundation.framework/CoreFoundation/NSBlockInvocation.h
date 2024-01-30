@interface NSBlockInvocation : NSInvocation

- (void)invokeUsingIMP:(void /* function */ *)a0;
- (void)setSelector:(SEL)a0;
- (void)invoke;
- (void)invokeSuper;
- (SEL)selector;

@end
