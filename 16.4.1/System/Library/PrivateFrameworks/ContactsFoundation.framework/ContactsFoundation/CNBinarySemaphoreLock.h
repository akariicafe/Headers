@class NSString, NSObject;
@protocol OS_dispatch_semaphore;

@interface CNBinarySemaphoreLock : NSObject <NSLocking> {
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

@property (copy) NSString *name;

- (void)lock;
- (void)unlock;
- (void)dealloc;
- (id)init;
- (id)description;
- (void)invalidate;
- (void).cxx_destruct;

@end
