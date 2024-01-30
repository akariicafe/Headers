@class NSUUID, NSArray;

@interface _HDLocationInsertionJournalEntry : HDJournalEntry

@property (readonly, copy, nonatomic) NSUUID *seriesIdentifier;
@property (readonly, copy, nonatomic) NSArray *data;

+ (BOOL)supportsSecureCoding;
+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSeriesPersistentID:(id)a0 locationData:(id)a1;

@end
