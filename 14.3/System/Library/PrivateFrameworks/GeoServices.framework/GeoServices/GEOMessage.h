@class GEOPeer, NSString, NSProgress, NSDictionary, GEOApplicationAuditToken, GEODataRequestThrottlerToken, NSObject;
@protocol OS_xpc_object;

@interface GEOMessage : NSObject {
    NSObject<OS_xpc_object> *_xpcMessage;
    NSProgress *_progressToMirrorOverXPC;
}

@property (readonly, nonatomic) NSProgress *progress;
@property (readonly, nonatomic) NSString *messageName;
@property (readonly, nonatomic) NSDictionary *userInfo;
@property (readonly, nonatomic) GEOPeer *peer;
@property (readonly, nonatomic) GEOApplicationAuditToken *preferredAuditToken;
@property (readonly, nonatomic) GEODataRequestThrottlerToken *throttleToken;

- (void)sendReply:(id)a0;
- (void)sendReplyWithXPCUserInfo:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithXPCMessage:(id)a0 peer:(id)a1;

@end
