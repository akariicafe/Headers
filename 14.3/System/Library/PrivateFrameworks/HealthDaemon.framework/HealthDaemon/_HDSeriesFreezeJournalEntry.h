@class NSUUID, NSDictionary;

@interface _HDSeriesFreezeJournalEntry : HDJournalEntry

@property (readonly, copy, nonatomic) NSUUID *seriesUUID;
@property (readonly, copy, nonatomic) NSDictionary *metadata;
@property (readonly, nonatomic) Class seriesClass;

+ (BOOL)supportsSecureCoding;
+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSeriesUUID:(id)a0 metadata:(id)a1 class:(Class)a2;

@end
