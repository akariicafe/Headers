@class PGGraphSceneFeatureNodeCollection, NSString;

@interface PGGraphSceneFeatureNode : PGGraphPropertylessNode <PGAssetCollectionFeature> {
    NSString *_label;
}

@property (readonly, nonatomic) PGGraphSceneFeatureNodeCollection *collection;
@property (readonly, nonatomic) unsigned long long featureType;
@property (readonly, nonatomic) NSString *featureIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)filter;
+ (id)momentOfSceneFeature;
+ (id)filterForSceneNames:(id)a0;
+ (id)filterForSceneName:(id)a0;

- (id)initWithLabel:(id)a0;
- (id)label;
- (void).cxx_destruct;
- (unsigned short)domain;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2 properties:(id)a3;

@end
