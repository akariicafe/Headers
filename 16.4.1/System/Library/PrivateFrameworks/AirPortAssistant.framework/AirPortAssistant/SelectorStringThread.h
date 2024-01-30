@interface SelectorStringThread : NSThread

+ (void)detachNewThreadSelector:(SEL)a0 toTarget:(id)a1 withObject:(id)a2;

@end
