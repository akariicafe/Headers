@class NSSet;

@interface SiriInference.ContactRankerOutput : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ provider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_scores;
    void /* unknown type, empty encoding */ $__lazy_storage_$_scoresShapedArray;
    void /* unknown type, empty encoding */ $__lazy_storage_$_showToUser;
    void /* unknown type, empty encoding */ $__lazy_storage_$_showToUserShapedArray;
    void /* unknown type, empty encoding */ $__lazy_storage_$_topMatchIsConfident;
    void /* unknown type, empty encoding */ $__lazy_storage_$_topMatchIsConfidentShapedArray;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
