@interface NSBlockInvocation : NSInvocation

- (void)invoke;
- (void)setSelector:(SEL)a0;
- (void)invokeUsingIMP:(void /* function */ *)a0;
- (void)invokeSuper;
- (SEL)selector;

@end
