@class PKSharingDestination, PKCloudStoreZoneInvitation, NSError;

@interface PKCloudStoreZoneInvitationRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKCloudStoreZoneInvitation *invitation;
@property (retain, nonatomic) PKSharingDestination *destination;
@property (copy, nonatomic) NSError *invitationError;

+ (id)invitationErrorWithProtobuf:(id)a0;
+ (id)cloudStoreZoneInvitationRequestWithProtobuf:(id)a0;

- (id)protobuf;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;

@end
