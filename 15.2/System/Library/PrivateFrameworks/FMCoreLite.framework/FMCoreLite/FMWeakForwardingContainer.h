@class NSObject;

@interface FMWeakForwardingContainer : NSObject

@property (readonly, weak, nonatomic) NSObject *target;

- (id)forwardingTargetForSelector:(SEL)a0;
- (id)initWithTarget:(id)a0;
- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;

@end
