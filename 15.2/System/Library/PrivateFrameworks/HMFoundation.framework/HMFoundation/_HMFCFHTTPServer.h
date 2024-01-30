@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, _HMFCFHTTPServerDelegate;

@interface _HMFCFHTTPServer : HMFObject <HMFLogging>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, nonatomic) struct _CFHTTPServer { } *internal;
@property (readonly, nonatomic) NSMutableArray *connections;
@property (weak) id<_HMFCFHTTPServerDelegate> delegate;
@property (readonly, nonatomic) unsigned long long port;
@property double connectionIdleTimeout;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)dealloc;
- (double)watchdogTimeout;
- (id)initWithPort:(unsigned long long)a0 options:(unsigned long long)a1;
- (void)setWatchdogTimeout:(double)a0;

@end
