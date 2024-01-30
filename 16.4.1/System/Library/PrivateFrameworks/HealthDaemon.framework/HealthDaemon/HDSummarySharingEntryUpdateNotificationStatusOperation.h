@class NSUUID, HKSummarySharingEntry, NSDate;

@interface HDSummarySharingEntryUpdateNotificationStatusOperation : HDJournalableOperation

@property (readonly, copy, nonatomic) NSUUID *invitationUUID;
@property (readonly, nonatomic) long long notificationStatus;
@property (readonly, copy, nonatomic) NSDate *dateModified;
@property (readonly, nonatomic) HKSummarySharingEntry *sharingEntry;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (BOOL)performWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)initWithInvitationUUID:(id)a0 notificationStatus:(long long)a1 dateModified:(id)a2;

@end
