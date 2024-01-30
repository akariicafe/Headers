@class NSSet;

@interface iCloudSubscriptionOptimizerDaemon.FeatureProvider : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ biomeManager;
    void /* unknown type, empty encoding */ timestamp;
    void /* unknown type, empty encoding */ displayTimestamp;
    void /* unknown type, empty encoding */ offsetTimeInterval;
    void /* unknown type, empty encoding */ offsetMins;
    void /* unknown type, empty encoding */ featureNamesToBuildFeatureArray;
    void /* unknown type, empty encoding */ pushTimestamp;
    void /* unknown type, empty encoding */ featureNames;
    void /* unknown type, empty encoding */ $__lazy_storage_$_biomeNotificationFeatureProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_biomeFocusFeatureProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_appLaunchFeatureProvier;
    void /* unknown type, empty encoding */ $__lazy_storage_$_usageTrackingFeatureProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_simpleTimeFeatureProvider;
}

@property (nonatomic, copy) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
