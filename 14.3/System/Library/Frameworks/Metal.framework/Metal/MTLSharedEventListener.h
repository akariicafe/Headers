@class NSObject;
@protocol OS_dispatch_queue;

@interface MTLSharedEventListener : NSObject

@property (readonly) NSObject<OS_dispatch_queue> *dispatchQueue;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;

- (id)init;
- (id)initWithDispatchQueue:(id)a0;

@end
