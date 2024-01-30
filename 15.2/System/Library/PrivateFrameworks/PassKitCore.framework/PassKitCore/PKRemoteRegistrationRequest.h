@interface PKRemoteRegistrationRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL registerBroker;
@property (nonatomic) BOOL registerPeerPayment;

+ (id)remoteRegistrationRequestWithProtobuf:(id)a0;

- (id)protobuf;
- (BOOL)isEqualToRemoteRegistrationRequest:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
