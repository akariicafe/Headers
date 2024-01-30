@class PGGraphFeatureNodeCollection, NSString, PGGraphHighlightGroupNodeCollection, PGGraphHighlightNodeCollection;

@interface PGGraphHighlightTypeNodeCollection : PGGraphNodeCollection <PGAssetCollectionFeatureNodeCollection>

@property (readonly, nonatomic) PGGraphHighlightNodeCollection *highlightNodes;
@property (readonly, nonatomic) PGGraphHighlightGroupNodeCollection *highlightGroupNodes;
@property (readonly, nonatomic) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)nodeClass;
+ (id)aggregationTypeNodesInGraph:(id)a0;
+ (id)concludedTripTypeNodesInGraph:(id)a0;
+ (id)defaultTypeNodesInGraph:(id)a0;
+ (id)longTripTypeNodesInGraph:(id)a0;
+ (id)onGoingTripTypeNodesInGraph:(id)a0;
+ (id)shortTripTypeNodesInGraph:(id)a0;
+ (id)tripTypeNodesInGraph:(id)a0;
+ (id)typeNodesWithLabel:(id)a0 inGraph:(id)a1;


@end
