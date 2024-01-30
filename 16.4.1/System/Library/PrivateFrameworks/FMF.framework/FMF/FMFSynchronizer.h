@class NSString, NSObject;
@protocol OS_dispatch_semaphore;

@interface FMFSynchronizer : NSObject

@property (nonatomic) BOOL timeoutOccurred;
@property (nonatomic) double timeout;
@property (retain, nonatomic) NSString *info;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *sem;

- (void)wait;
- (void)signal;
- (id)initWithDescription:(id)a0 andTimeout:(double)a1;
- (id)loggingID;
- (void).cxx_destruct;

@end
