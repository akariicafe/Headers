@interface VCActionDonationFetcher : NSObject

+ (id)donationFromEvent:(id)a0;
+ (void)sourceAppIdentifierArrayForApplicationBundleIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (id)donationFromEvent:(id)a0 filteringForTopLevel:(BOOL)a1;
+ (BOOL)shouldKeepAction:(id)a0 forAppWithBundleIdentifier:(id)a1 filteringForTopLevel:(BOOL)a2;
+ (BOOL)shouldKeepActionWithAppBundleIdentifierForDisplay:(id)a0;
+ (id)keyPathForStream:(id)a0;
+ (id)fetchEventsWithPredicate:(id)a0 limit:(unsigned long long)a1;
+ (id)fetchEventsWithPredicate:(id)a0 limit:(unsigned long long)a1 directAccess:(BOOL)a2;
+ (id)fetchDonationsWithPredicate:(id)a0 limit:(unsigned long long)a1 filteringForTopLevel:(BOOL)a2;
+ (id)fetchDonationsWithPredicate:(id)a0 limit:(unsigned long long)a1 filteringForTopLevel:(BOOL)a2 directAccess:(BOOL)a3;
+ (void)fetchDonationsForApplicationBundleIdentifier:(id)a0 limit:(unsigned long long)a1 filteringForTopLevel:(BOOL)a2 filteringForIsEligibleForPrediction:(BOOL)a3 filteringForRecent:(BOOL)a4 completion:(id /* block */)a5;
+ (void)fetchDonationsForApplicationBundleIdentifier:(id)a0 limit:(unsigned long long)a1 shortcutAvailability:(unsigned long long)a2 completion:(id /* block */)a3;
+ (id)predicateForShortcutAvailabilityOptions:(unsigned long long)a0;
+ (id)whitelistedDonationsWithOptions:(unsigned long long)a0;
+ (void)getPredicateForUserActivitiesWithApplicationBundleIdentifier:(id)a0 filteringForIsEligibleForPrediction:(BOOL)a1 completionHandler:(id /* block */)a2;
+ (id)donationWithUUID:(id)a0;
+ (id)appPredictionBlacklist;
+ (void)getPredicateForIntentsWithApplicationBundleIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (void)fetchDonationsWithLimit:(unsigned long long)a0 filteringForIsEligibleForPrediction:(BOOL)a1 completion:(id /* block */)a2;
+ (id)isEligibleForPredictionPredicate;
+ (id)filterDonations:(id)a0 forApplicationBundleIdentifier:(id)a1;
+ (BOOL)shouldFilterDonationsForAppWithApplicationBundleIdentifier:(id)a0;
+ (id)actionPredictionBlacklist;
+ (id)streams;

@end
