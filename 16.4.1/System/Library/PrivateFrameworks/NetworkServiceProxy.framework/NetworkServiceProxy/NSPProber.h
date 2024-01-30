@class NSURLSession, NSString, NWPath, NSOperationQueue, NSURLSessionDataTask, NSObject, NSDate;
@protocol OS_dispatch_source, NSPProberDelegate;

@interface NSPProber : NSObject <NSSecureCoding, NSCopying, NSURLSessionTaskDelegate> {
    BOOL _probingActive;
    BOOL _probeOnNetworkChange;
    BOOL _probePending;
    BOOL _proxyProber;
    int _linkQuality;
    id<NSPProberDelegate> _delegate;
    NSString *_name;
    NSURLSession *_probeSession;
    NSURLSessionDataTask *_dataTask;
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_source> *_probeRetryTimer;
    unsigned long long _probeCount;
    unsigned long long _probeConnectionTimeout;
    NSDate *_nextProbeDate;
    NWPath *_path;
    unsigned long long _probeSuccessCount;
    unsigned long long _probeFailedCount;
    unsigned long long _probeRedirectedCount;
    unsigned long long _probeServerErrorCount;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
