@class PGGraphFeatureNodeCollection, PGGraphAddressNodeCollection, NSString, PGGraphPersonNodeCollection;

@interface PGGraphHomeWorkNodeCollection : PGGraphNodeCollection <PGAssetCollectionFeatureNodeCollection>

@property (readonly, nonatomic) PGGraphAddressNodeCollection *addressNodes;
@property (readonly, nonatomic) PGGraphAddressNodeCollection *preciseAddressNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *ownerNodes;
@property (readonly, nonatomic) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)nodeClass;
+ (id)homeNodesInGraph:(id)a0;
+ (id)workNodesInGraph:(id)a0;


@end
