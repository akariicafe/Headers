@protocol KGGraphImplementation;

@interface KGGraph : NSObject

@property (readonly, nonatomic) id<KGGraphImplementation> implementation;

- (id)nodeLabels;
- (void).cxx_destruct;
- (id)edgeLabels;
- (id)nodeIdentifiersMatchingFilter:(id)a0 intersectingIdentifiers:(id)a1;
- (id)nodeForIdentifier:(unsigned long long)a0;
- (id)nodesForIdentifiers:(id)a0;
- (id)nodeIdentifiersMatchingFilter:(id)a0;
- (id)edgeForIdentifier:(unsigned long long)a0;
- (id)edgesForIdentifiers:(id)a0;
- (id)edgeIdentifiersMatchingFilter:(id)a0;
- (id)edgeIdentifiersMatchingFilter:(id)a0 intersectingIdentifiers:(id)a1;
- (id)targetsBySourceWithEdgeIdentifiers:(id)a0;
- (id)sourcesByTargetWithEdgeIdentifiers:(id)a0;
- (id)initWithImplementation:(id)a0;
- (id)_nodeIdentifiersMatchingFilter:(id)a0 intersectingIdentifiers:(id)a1;
- (id)nodeIdentifiersOfEdgesForIdentifiers:(id)a0 edgeDirection:(unsigned long long)a1;
- (id)_edgeIdentifiersMatchingFilter:(id)a0 intersectingIdentifiers:(id)a1;
- (id)edgeIdentifiersWithStartNodeIdentifiers:(id)a0 edgeDirection:(unsigned long long)a1;
- (id)neighborNodeIdentifiersWithStartNodeIdentifiers:(id)a0 edgeDirection:(unsigned long long)a1 edgeFilter:(id)a2;

@end
