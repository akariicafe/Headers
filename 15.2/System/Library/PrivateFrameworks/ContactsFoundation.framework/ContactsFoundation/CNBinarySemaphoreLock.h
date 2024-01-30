@class NSString, NSObject;
@protocol OS_dispatch_semaphore;

@interface CNBinarySemaphoreLock : NSObject <NSLocking> {
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

@property (copy) NSString *name;

- (void)unlock;
- (void)lock;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)dealloc;

@end
