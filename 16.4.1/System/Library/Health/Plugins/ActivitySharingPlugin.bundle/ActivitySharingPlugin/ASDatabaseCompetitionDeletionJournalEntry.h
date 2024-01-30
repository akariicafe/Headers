@class NSUUID;

@interface ASDatabaseCompetitionDeletionJournalEntry : HDJournalEntry {
    NSUUID *_friendUUID;
    long long _type;
}

+ (BOOL)supportsSecureCoding;
+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFriendUUID:(id)a0 type:(long long)a1;

@end
