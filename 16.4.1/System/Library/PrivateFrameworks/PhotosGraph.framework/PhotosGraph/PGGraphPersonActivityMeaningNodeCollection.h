@class PGGraphMomentNodeCollection, PGGraphFeatureNodeCollection, NSString, PGGraphPersonNodeCollection;

@interface PGGraphPersonActivityMeaningNodeCollection : PGGraphNodeCollection <PGAssetCollectionFeatureNodeCollection>

@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *personNodes;
@property (readonly, nonatomic) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)nodeClass;
+ (id)personActivityMeaningNodesForActivityLabel:(id)a0 inGraph:(id)a1;
+ (id)personActivityMeaningNodesForActivityLabel:(id)a0 personLocalIdentifiers:(id)a1 inGraph:(id)a2;
+ (id)personActivityMeaningNodesForActivityLabels:(id)a0 inGraph:(id)a1;

- (id)personLocalIdentifiers;
- (id)personActivityMeaningLabels;
- (id)subsetWithActivityLabels:(id)a0;

@end
