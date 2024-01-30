@class NSSet;

@interface SiriAudioSupport.PlayMediaAppSelectionOutput : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ provider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_result_isRequestedApp;
    void /* unknown type, empty encoding */ $__lazy_storage_$_result_isRequestedAppProbability;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
