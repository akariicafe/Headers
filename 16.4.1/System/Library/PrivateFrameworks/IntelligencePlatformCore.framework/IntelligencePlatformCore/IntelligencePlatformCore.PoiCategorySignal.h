@class NSSet;

@interface IntelligencePlatformCore.PoiCategorySignal : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ poiCategoryStream;
    void /* unknown type, empty encoding */ numPoiCategoriesLimit;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
