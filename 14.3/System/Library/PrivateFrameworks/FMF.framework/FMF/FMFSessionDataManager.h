@class NSSet, NSMutableDictionary;

@interface FMFSessionDataManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *locationsCache;
@property (retain, nonatomic) NSSet *followers;
@property (retain, nonatomic) NSSet *following;
@property (retain, nonatomic) NSSet *locations;
@property (retain, nonatomic) NSSet *fences;

+ (id)sharedInstance;

- (void)abDidChange;
- (void)abPreferencesDidChange;
- (void).cxx_destruct;
- (id)locationForHandle:(id)a0;
- (id)followingForHandle:(id)a0;
- (id)offerExpirationForHandle:(id)a0 groupId:(id)a1;
- (id)favoritesOrdered;
- (id)followerForHandle:(id)a0;

@end
