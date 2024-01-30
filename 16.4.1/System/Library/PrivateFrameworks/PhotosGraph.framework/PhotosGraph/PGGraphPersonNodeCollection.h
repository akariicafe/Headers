@class NSString, NSSet, PGGraphFeatureNodeCollection, PGGraphSocialGroupNodeCollection, PGGraphMomentNodeCollection, PGGraphHomeWorkNodeCollection, PGGraphRelationshipEdgeCollection;

@interface PGGraphPersonNodeCollection : PGGraphNodeCollection <PGAssetCollectionFeatureNodeCollection>

@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;
@property (readonly, nonatomic) PGGraphSocialGroupNodeCollection *socialGroupNodes;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *authoredMomentNodes;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodesWithPresence;
@property (readonly, nonatomic) PGGraphHomeWorkNodeCollection *homeOrWorkNodes;
@property (readonly, nonatomic) PGGraphHomeWorkNodeCollection *homeNodes;
@property (readonly, nonatomic) PGGraphHomeWorkNodeCollection *workNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *partnerPersonNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *inferredPartnerPersonNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *motherPersonNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *inferredMotherPersonNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *fatherPersonNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *inferredFatherPersonNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *friendPersonNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *inferredFriendPersonNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *familyPersonNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *inferredFamilyPersonNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *parentPersonNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *inferredParentPersonNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *sisterPersonNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *inferredSisterPersonNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *brotherPersonNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *inferredBrotherPersonNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *childPersonNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *inferredChildPersonNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *sonPersonNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *inferredSonPersonNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *daughterPersonNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *inferredDaughterPersonNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *coworkerPersonNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *inferredCoworkerPersonNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *acquaintancePersonNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *inferredAcquaintancePersonNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *relatedPersonNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *subsetExcludingMe;
@property (readonly, nonatomic) NSSet *localIdentifiers;
@property (readonly, nonatomic) NSSet *uuids;
@property (readonly, nonatomic) PGGraphRelationshipEdgeCollection *relationshipEdges;
@property (readonly, nonatomic) PGGraphRelationshipEdgeCollection *relationshipOutEdges;
@property (readonly, nonatomic) PGGraphRelationshipEdgeCollection *relationshipInEdges;
@property (readonly, nonatomic) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)nodeClass;
+ (id)favoritedPersonNodesExcludingMeInGraph:(id)a0;
+ (id)favoritedPersonNodesIncludingMeInGraph:(id)a0;
+ (id)namedPersonNodesInGraph:(id)a0;
+ (id)personNodesExcludingMeInGraph:(id)a0;
+ (id)personNodesForArrayOfLocalIdentifiers:(id)a0 inGraph:(id)a1;
+ (id)personNodesForContactIdentifiers:(id)a0 inGraph:(id)a1;
+ (id)personNodesForLocalIdentifier:(id)a0 inGraph:(id)a1;
+ (id)personNodesForLocalIdentifiers:(id)a0 inGraph:(id)a1;
+ (id)personNodesForShareParticipantIdentifiers:(id)a0 inGraph:(id)a1;
+ (id)personNodesForSharedLibraryParticipantsInGraph:(id)a0;
+ (id)personNodesInAgeCategories:(id)a0 includingMe:(BOOL)a1 inGraph:(id)a2;
+ (id)personNodesIncludingMeInGraph:(id)a0;
+ (id)personNodesWithName:(id)a0 inGraph:(id)a1;
+ (id)personNodesWithNames:(id)a0 inGraph:(id)a1;
+ (id)unnamedPersonNodesInGraph:(id)a0;

- (BOOL)containsMeNode;
- (void)enumerateBiologicalSexUsingBlock:(id /* block */)a0;
- (id)personNodeByLocalIdentifier;

@end
