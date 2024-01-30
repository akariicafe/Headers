@class NSObject;

@interface DOCWeakProxy : NSObject

@property (weak) NSObject *target;

- (id)initWithTarget:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;

@end
