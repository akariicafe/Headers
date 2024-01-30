@class PGGraphFeatureNodeCollection, NSString, PGGraphAddressNodeCollection;

@interface PGGraphAreaNodeCollection : PGGraphNodeCollection <PGGraphLocationOrAreaNodeCollection, PGAssetCollectionFeatureNodeCollection>

@property (readonly, nonatomic) PGGraphAddressNodeCollection *addressNodes;
@property (readonly, nonatomic) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)nodeClass;
+ (id)areaNodesForNames:(id)a0 inGraph:(id)a1;

- (id)nonBlockedAreaNodes;

@end
