@class NSString;

@interface BRCItemDBRowIDJobIdentifier : NSObject <BRCJobIdentifying>

@property (readonly, nonatomic) long long itemDBRowID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)columns;
- (id)matchingJobsWhereSQLClause;
- (id)jobsDescription;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)columnsValues;
- (id)initWithItemDBRowID:(long long)a0;
- (BOOL)isEqualToItemDBRowIDIdentifier:(id)a0;

@end
