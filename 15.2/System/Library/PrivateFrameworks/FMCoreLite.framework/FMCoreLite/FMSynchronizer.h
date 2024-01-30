@class NSString, NSObject;
@protocol OS_dispatch_semaphore;

@interface FMSynchronizer : NSObject

@property (nonatomic) BOOL timeoutOccurred;
@property (nonatomic) double timeout;
@property (retain, nonatomic) NSString *info;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *sem;

- (void)signal;
- (id)initWithDescription:(id)a0 andTimeout:(double)a1;
- (void).cxx_destruct;
- (void)wait;

@end
