@class CKShareParticipant, NSString, HMBShareInvitation, NSUUID, HMBShareUserID;

@interface HMBShareParticipant : HMFObject <HMBModelObjectStorage, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) CKShareParticipant *ckShareParticipant;
@property (copy) HMBShareInvitation *pendingInvitation;
@property (readonly, copy) NSUUID *clientIdentifier;
@property (readonly, copy) HMBShareUserID *cloudShareID;
@property (readonly) BOOL hasWriteAccess;
@property (readonly) BOOL hasAccepted;

+ (id)hmbDecodeData:(id)a0 fromStorageLocation:(unsigned long long)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)hmbEncodeForStorageLocation:(unsigned long long)a0 error:(id *)a1;
- (id)attributeDescriptions;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCKShareParticipant:(id)a0 clientIdentifier:(id)a1;

@end
