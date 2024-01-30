@interface NewsPersonalization.XavierGroupingService : _TtCs12_SwiftObject <FCPersonalizedGrouping> {
    void /* unknown type, empty encoding */ cloudContext;
    void /* unknown type, empty encoding */ personalizationTreatment;
    void /* unknown type, empty encoding */ favoritesPersonalizer;
    void /* unknown type, empty encoding */ deviceIsiPad;
    void /* unknown type, empty encoding */ paidAccessChecker;
    void /* unknown type, empty encoding */ isRunningPPT;
}

- (id)bestOfGroupFromHeadlines:(id)a0 configurationSet:(long long)a1;
- (id)bestOfGroupFromFeedItems:(id)a0 scoreProfiles:(id)a1 configurationSet:(long long)a2;

@end
