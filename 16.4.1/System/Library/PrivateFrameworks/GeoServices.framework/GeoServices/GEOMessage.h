@class GEOPeer, NSString, NSDictionary, GEOApplicationAuditToken, GEODataRequestThrottlerToken, NSObject;
@protocol OS_xpc_object;

@interface GEOMessage : NSObject {
    NSObject<OS_xpc_object> *_xpcMessage;
}

@property (readonly, nonatomic) NSString *messageName;
@property (readonly, nonatomic) NSDictionary *userInfo;
@property (readonly, nonatomic) GEOPeer *peer;
@property (readonly, nonatomic) GEOApplicationAuditToken *preferredAuditToken;
@property (readonly, nonatomic) GEODataRequestThrottlerToken *throttleToken;

- (void)sendReply:(id)a0;
- (id)init;
- (id)initWithXPCMessage:(id)a0 peer:(id)a1;
- (void)sendReplyWithXPCUserInfo:(id)a0;
- (void).cxx_destruct;

@end
