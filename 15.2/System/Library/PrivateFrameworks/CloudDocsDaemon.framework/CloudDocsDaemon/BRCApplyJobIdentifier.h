@interface BRCApplyJobIdentifier : BRCIntAndZoneJobIdentifier

- (long long)rank;
- (id)initWithRank:(long long)a0 zoneRowID:(id)a1;
- (long long)rejectedRowID;
- (long long)serverItemRank;

@end
