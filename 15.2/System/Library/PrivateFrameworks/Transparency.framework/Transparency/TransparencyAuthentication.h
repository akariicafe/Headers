@class NSDate, NSArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group, OS_dispatch_workloop;

@interface TransparencyAuthentication : NSObject

@property (retain) NSObject<OS_dispatch_workloop> *workloop;
@property BOOL isSupported;
@property (retain) NSDate *lastLocalFetchTime;
@property struct __SecKey { } *bik;
@property (retain) NSArray *certificates;
@property BOOL outstandingRemoteFetchSignal;
@property (retain) NSObject<OS_dispatch_queue> *issuanceQueue;
@property (retain) NSObject<OS_dispatch_group> *issuanceGroup;
@property (readonly) BOOL ready;

- (void)signData:(id)a0 fetchNow:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)signData:(id)a0 key:(struct __SecKey { } *)a1 certs:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithWorkloop:(id)a0;
- (void)issueCert:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)deviceIdentityIssuerCert:(id)a0 completionHandler:(id /* block */)a1;
- (void)signDataWithTimestamp:(id)a0 fetchNow:(BOOL)a1 timeShift:(double)a2 completionHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (void)signDataWithTimestamp:(id)a0 fetchNow:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)dealloc;

@end
