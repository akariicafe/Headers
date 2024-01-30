@class PGGraphMomentNodeCollection, NSSet, PGGraphPublicEventNodeCollection, PGGraphBusinessCategoryNodeCollection, PGGraphFeatureNodeCollection, NSString;

@interface PGGraphBusinessNodeCollection : PGGraphNodeCollection <PGAssetCollectionFeatureNodeCollection>

@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;
@property (readonly, nonatomic) PGGraphBusinessCategoryNodeCollection *categoryNodes;
@property (readonly, nonatomic) PGGraphPublicEventNodeCollection *publicEventNodes;
@property (readonly, nonatomic) NSSet *businessNames;
@property (readonly, nonatomic) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)nodeClass;
+ (id)restaurantBusinessNodesInGraph:(id)a0;
+ (id)businessNodeForBusinessMuid:(unsigned long long)a0 inGraph:(id)a1;


@end
