@interface PKRemoteRegistrationRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL registerBroker;
@property (nonatomic) BOOL registerPeerPayment;

+ (id)remoteRegistrationRequestWithProtobuf:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)protobuf;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)isEqualToRemoteRegistrationRequest:(id)a0;

@end
