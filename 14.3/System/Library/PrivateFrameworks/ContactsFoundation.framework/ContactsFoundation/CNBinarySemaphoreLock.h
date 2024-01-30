@class NSString, NSObject;
@protocol OS_dispatch_semaphore;

@interface CNBinarySemaphoreLock : NSObject <NSLocking> {
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

@property (copy) NSString *name;

- (void)unlock;
- (void)lock;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)invalidate;

@end
