@class NSUUID, NSData;

@interface _HDAssociationInsertionJournalEntry : HDJournalEntry

@property (readonly, nonatomic) NSUUID *parentUUID;
@property (readonly, nonatomic) NSData *childUUIDsData;
@property (readonly, nonatomic) long long provenance;
@property (readonly, nonatomic) BOOL enforceSameSource;

+ (BOOL)supportsSecureCoding;
+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithParentUUID:(id)a0 childUUIDsData:(id)a1 provenance:(long long)a2 enforceSameSource:(BOOL)a3;

@end
