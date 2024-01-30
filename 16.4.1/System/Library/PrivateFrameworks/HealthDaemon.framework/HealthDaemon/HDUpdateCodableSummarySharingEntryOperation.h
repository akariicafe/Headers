@class CKShareParticipant, NSUUID, NSDate, HKSummarySharingEntry;

@interface HDUpdateCodableSummarySharingEntryOperation : HDJournalableOperation

@property (readonly, copy, nonatomic) NSUUID *invitationUUID;
@property (readonly, nonatomic) HKSummarySharingEntry *sharingEntry;
@property (readonly, nonatomic) long long status;
@property (readonly, copy, nonatomic) NSDate *dateModified;
@property (readonly, copy, nonatomic) NSDate *dateAccepted;
@property (readonly, copy, nonatomic) CKShareParticipant *ownerParticipant;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (BOOL)performWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)initWithInvitationUUID:(id)a0 status:(long long)a1 dateModified:(id)a2 dateAccepted:(id)a3 ownerParticipant:(id)a4;

@end
