@class PGGraphMomentNodeCollection, PGGraphFeatureNodeCollection, PGGraphPublicEventNodeCollection, PGGraphBusinessCategoryNodeCollection, NSString;

@interface PGGraphBusinessNodeCollection : PGGraphNodeCollection <PGAssetCollectionFeatureNodeCollection>

@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;
@property (readonly, nonatomic) PGGraphBusinessCategoryNodeCollection *categoryNodes;
@property (readonly, nonatomic) PGGraphPublicEventNodeCollection *publicEventNodes;
@property (readonly, nonatomic) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)nodeClass;


@end
