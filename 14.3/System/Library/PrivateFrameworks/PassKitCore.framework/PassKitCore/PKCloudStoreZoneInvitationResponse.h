@class PKSharingDestination, PKCloudStoreZoneInvitation;

@interface PKCloudStoreZoneInvitationResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKCloudStoreZoneInvitation *invitation;
@property (retain, nonatomic) PKSharingDestination *destination;
@property (nonatomic) long long status;

+ (id)cloudStoreZoneInvitationResponseWithProtobuf:(id)a0;

- (id)protobuf;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
