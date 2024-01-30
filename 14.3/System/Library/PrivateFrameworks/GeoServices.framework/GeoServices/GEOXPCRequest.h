@class GEODataRequestThrottlerToken, NSString, NSError, GEOApplicationAuditToken, GEOPeer, NSProgress, GEOMapServiceTraits, NSObject;
@protocol OS_xpc_object;

@interface GEOXPCRequest : NSObject <GEOXPCSerializable> {
    NSError *_error;
}

@property (retain, nonatomic) NSObject<OS_xpc_object> *object;
@property (retain, nonatomic) NSString *service;
@property (retain, nonatomic) NSString *method;
@property (retain, nonatomic) GEOPeer *peer;
@property (retain, nonatomic) GEOApplicationAuditToken *preferredAuditToken;
@property (retain, nonatomic) NSProgress *progress;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *replyDictionary;
@property (readonly, nonatomic) unsigned char flags;
@property (readonly, nonatomic) GEOMapServiceTraits *traits;
@property (readonly, nonatomic) GEODataRequestThrottlerToken *throttleToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)reportsProgress;

- (id)init;
- (void).cxx_destruct;
- (id)sendSync:(id)a0 error:(id *)a1;
- (id)initWithMessage:(id)a0 traits:(id)a1 auditToken:(id)a2 throttleToken:(id)a3;
- (id)_createConnectionWithQueue:(id)a0;
- (id)initWithXPCDictionary:(id)a0 error:(id *)a1;
- (id)_prepareRequest;
- (void)encodeToXPCDictionary:(id)a0;
- (void)send:(id)a0 withReply:(id)a1 handler:(id /* block */)a2;
- (void)send:(id)a0;

@end
