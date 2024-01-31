@class NSXPCConnection, NSDate;
@protocol AAAttribution_XPC;

@interface AAAttributionRequester : NSObject {
    NSXPCConnection *_connection;
}

@property (nonatomic) BOOL connectionInterrupted;
@property (retain, nonatomic) id<AAAttribution_XPC> remoteProxy;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } unfairLock;
@property (nonatomic) BOOL isMainThread;
@property (retain, nonatomic) NSDate *requestTime;

+ (id)_createInternalError;
+ (long long)_findBucketForDaemonRunningTime:(double)a0;
+ (long long)_tokenStatusFromTokenSource:(long long)a0;

- (void).cxx_destruct;
- (void)_reportTokenStatus:(long long)a0 storeFront:(id)a1 daemonRunningTime:(double)a2;
- (void)_sendAnalyticsAndInvalidateConnection:(unsigned long long)a0 end:(unsigned long long)a1;

@end
