@class PGGraphMomentNodeCollection, PGGraphFeatureNodeCollection, NSString, PGGraphPersonNodeCollection;

@interface PGGraphSocialGroupNodeCollection : PGGraphNodeCollection <PGAssetCollectionFeatureNodeCollection>

@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *personNodes;
@property (readonly, nonatomic) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)nodeClass;
+ (id)socialGroupNodeForSocialGroupIdentifier:(long long)a0 inGraph:(id)a1;


@end
