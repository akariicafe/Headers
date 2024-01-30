@class MEComposeContext, NSUUID, MERemoteExtension, MEMessage;
@protocol MEComposeSessionHostProtocol_XPC;

@interface MEComposeSession : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *sessionID;
@property (retain, nonatomic) MEComposeContext *composeContext;
@property (retain, nonatomic) MERemoteExtension *remoteExtension;
@property (retain, nonatomic) MEMessage *mailMessage;
@property (retain, nonatomic) id<MEComposeSessionHostProtocol_XPC> remoteHostContext;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithSessionID:(id)a0 composeContext:(id)a1 mailMessage:(id)a2;
- (void)reloadSession;

@end
