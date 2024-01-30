@class NSString, BRCZoneRowID;

@interface BRCIntAndZoneJobIdentifier : NSObject <BRCJobIdentifying>

@property (readonly, nonatomic) long long intID;
@property (readonly, nonatomic) BRCZoneRowID *zoneRowID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)columns;
- (BOOL)isEqual:(id)a0;
- (id)matchingJobsWhereSQLClause;
- (id)columnsValues;
- (id)jobsDescription;
- (id)initWithIntID:(long long)a0 zoneRowID:(id)a1;
- (BOOL)isEqualToIntAndZoneJobIdentifier:(id)a0;

@end
