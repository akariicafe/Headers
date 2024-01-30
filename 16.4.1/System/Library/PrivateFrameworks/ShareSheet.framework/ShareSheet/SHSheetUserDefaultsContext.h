@class NSArray, NSDictionary;

@interface SHSheetUserDefaultsContext : NSObject

@property (readonly, copy, nonatomic) NSArray *applicationActivities;
@property (readonly, copy, nonatomic) NSDictionary *activitiesByUUID;
@property (readonly, copy, nonatomic) NSArray *favoritesProxies;
@property (readonly, copy, nonatomic) NSArray *suggestionProxies;
@property (readonly, copy, nonatomic) NSArray *orderedUUIDs;
@property (readonly, copy, nonatomic) NSArray *excludedActivityTypes;
@property (readonly, nonatomic) long long category;

- (id)description;
- (void).cxx_destruct;
- (id)initWithApplicationActivities:(id)a0 activitiesByUUID:(id)a1 favoritesProxies:(id)a2 suggestionProxies:(id)a3 orderedUUIDs:(id)a4 excludedActivityTypes:(id)a5 activityCategory:(long long)a6;

@end
