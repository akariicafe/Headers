@class NSString, MARelation;

@interface PGGraphPersonActivityMeaningNode : PGGraphOptimizedNode <PGAssetCollectionFeature> {
    NSString *_label;
}

@property (class, readonly) MARelation *momentOfPersonActivity;

@property (readonly, nonatomic) NSString *personLocalIdentifier;
@property (readonly, nonatomic) unsigned long long featureType;
@property (readonly, nonatomic) NSString *featureIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)filter;
+ (id)personOfPersonActivity;
+ (id)filterWithPersonLocalIdentifiers:(id)a0 label:(id)a1;
+ (id)filterWithActivityLabels:(id)a0;

- (BOOL)hasProperties:(id)a0;
- (id)propertyDictionary;
- (id)label;
- (void).cxx_destruct;
- (unsigned short)domain;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2 properties:(id)a3;
- (id)initWithPersonLocalIdentifier:(id)a0 activity:(id)a1;

@end
