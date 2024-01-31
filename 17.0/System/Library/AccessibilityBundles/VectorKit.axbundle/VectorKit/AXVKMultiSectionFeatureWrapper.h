@class GEOMultiSectionFeature;

@interface AXVKMultiSectionFeatureWrapper : NSObject {
    GEOMultiSectionFeature *_feature;
}

@property (nonatomic) GEOMultiSectionFeature *feature;
@property (nonatomic) double creationTime;

- (unsigned long long)hash;
- (id)featureName;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithFeature:(id)a0;

@end
