@class CKUserIdentityLookupInfo, NSUUID;

@interface HMBShareInvitationContext : HMFObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) CKUserIdentityLookupInfo *lookupInfo;
@property (readonly, copy) NSUUID *participantClientIdentifier;
@property BOOL shouldGrantWriteAccess;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)attributeDescriptions;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithParticipantClientIdentifier:(id)a0 lookupInfo:(id)a1;
- (id)initWithParticipantClientIdentifier:(id)a0 emailAddress:(id)a1;
- (id)initWithParticipantClientIdentifier:(id)a0 phoneNumber:(id)a1;
- (id)initWithParticipantClientIdentifier:(id)a0 cloudShareID:(id)a1;

@end
