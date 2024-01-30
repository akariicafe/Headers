@class HDProfile;

@interface FCGoalProgressStore : NSObject {
    HDProfile *_profile;
}

- (id)initWithProfile:(id)a0;
- (id)currentConfiguration;
- (void)storeFiredEventDate:(id)a0 identifier:(id)a1;
- (id)_legacyDefaultsDomain;
- (void)storeCurrentConfiguration:(id)a0;
- (id)_userDefaultsDomain;
- (void).cxx_destruct;
- (id)lastFiredEventDateForIdentifier:(id)a0;

@end
