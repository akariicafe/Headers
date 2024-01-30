@class NSString, CKUserIdentityLookupInfo, CKDeviceToDeviceShareInvitationToken;

@interface PKCloudStoreZoneShareParticipant : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *participantHandle;
@property (retain, nonatomic) CKUserIdentityLookupInfo *lookupInfo;
@property (retain, nonatomic) CKDeviceToDeviceShareInvitationToken *invitationToken;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)invitationTokenData;
- (id)lookupInfoData;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithParticipant:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
