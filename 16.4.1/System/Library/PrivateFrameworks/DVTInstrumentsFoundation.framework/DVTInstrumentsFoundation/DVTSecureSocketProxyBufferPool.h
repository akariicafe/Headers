@class NSMutableArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface DVTSecureSocketProxyBufferPool : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *bufferAvailable;
@property (retain, nonatomic) NSMutableArray *dataBuffers;

- (void)releaseBuffer:(id)a0;
- (void).cxx_destruct;
- (id)blockingAcquireBuffer;
- (id)initWithCount:(int)a0 bufferSize:(unsigned long long)a1;

@end
