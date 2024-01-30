@class CKUserIdentityLookupInfo, NSUUID;

@interface HMBShareInvitationContext : HMFObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) CKUserIdentityLookupInfo *lookupInfo;
@property (readonly, copy) NSUUID *participantClientIdentifier;
@property BOOL shouldGrantWriteAccess;

- (id)attributeDescriptions;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithParticipantClientIdentifier:(id)a0 emailAddress:(id)a1;
- (id)initWithParticipantClientIdentifier:(id)a0 phoneNumber:(id)a1;
- (id)initWithParticipantClientIdentifier:(id)a0 cloudShareID:(id)a1;
- (id)initWithParticipantClientIdentifier:(id)a0 lookupInfo:(id)a1;

@end
