@class NSDictionary;

@interface HKHeartRhythmOnboardingHistory : NSObject

@property (readonly, nonatomic) NSDictionary *dataSource;
@property (readonly, nonatomic) long long count;
@property (readonly, nonatomic) long long maxOnboardedVersion;

- (id)_filterLessThanOrEqualToVersion:(long long)a0;
- (BOOL)containsOnboardedVersion:(long long)a0;
- (id)description;
- (id)_filterOnlyLessThanVersion:(long long)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)_emptyHistory;
- (id)filteredHistoryByVersion:(long long)a0 filterType:(long long)a1;

@end
