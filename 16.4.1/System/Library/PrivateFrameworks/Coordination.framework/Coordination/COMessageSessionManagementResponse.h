@class NSData, NSString, NSError;

@interface COMessageSessionManagementResponse : COMessageChannelResponse

@property (readonly, copy, nonatomic) NSData *payload;
@property (readonly, copy, nonatomic) NSString *payloadType;
@property (readonly, copy, nonatomic) NSError *remoteError;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithPayload:(id)a0 payloadType:(id)a1;
- (id)initWithRemoteError:(id)a0;

@end
