@class NSString;

@interface PKPassCredentialShare : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *channelTransportIdentifier;
@property (nonatomic) long long targetDevice;
@property (nonatomic) unsigned long long status;
@property (readonly, nonatomic, getter=isForWatch) BOOL forWatch;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithInvitationData:(id)a0;
- (void)updateWithInvitationData:(id)a0;

@end
