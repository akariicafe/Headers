@class NSSet, PGGraphFeatureNodeCollection, PGGraphDateNodeCollection, NSString;

@interface PGGraphSeasonNodeCollection : PGGraphNodeCollection <PGAssetCollectionFeatureNodeCollection>

@property (readonly, nonatomic) PGGraphDateNodeCollection *dateNodes;
@property (readonly, nonatomic) NSSet *names;
@property (readonly, nonatomic) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)nodeClass;
+ (id)seasonNodesForSeasonName:(id)a0 inGraph:(id)a1;


@end
