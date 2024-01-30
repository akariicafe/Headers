@class NSUUID, MEMessage, MERemoteExtension;
@protocol MEComposeSessionHostProtocol_XPC;

@interface MEComposeSession : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *sessionID;
@property (retain, nonatomic) MERemoteExtension *remoteExtension;
@property (retain, nonatomic) MEMessage *mailMessage;
@property (retain, nonatomic) id<MEComposeSessionHostProtocol_XPC> remoteHostContext;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithSessionID:(id)a0 mailMessage:(id)a1;
- (void)reloadSession;

@end
