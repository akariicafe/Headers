@class NSSet, NSString, REFeatureMap;

@interface _REFeatureMapWrapper : NSObject <REMLFeatureProvider> {
    REFeatureMap *_featureMap;
}

@property (readonly, nonatomic) NSSet *allFeatures;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)valueForFeature:(id)a0;
- (id)initWithFeatureMap:(id)a0;

@end
