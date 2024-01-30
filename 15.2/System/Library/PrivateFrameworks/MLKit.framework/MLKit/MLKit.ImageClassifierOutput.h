@class NSSet;

@interface MLKit.ImageClassifierOutput : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ provider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_classLabelProbs;
    void /* unknown type, empty encoding */ $__lazy_storage_$_classLabel;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
