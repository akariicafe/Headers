@class NSString, NSCountedSet, NSMutableDictionary;

@interface PGGraphPortraitDonationEnrichmentProcessor : NSObject <PGGraphDataModelEnrichmentProcessor>

@property (class, readonly, nonatomic) NSString *graphDonationBundleId;
@property (class, readonly, nonatomic) BOOL supportsBackgroundJob;
@property (class, readonly, nonatomic) double backgroundJobTimeout;
@property (class, readonly, nonatomic) NSString *backgroundJobName;

@property (readonly, nonatomic) NSCountedSet *meaningNodes;
@property (readonly, nonatomic) NSCountedSet *poiNodes;
@property (readonly, nonatomic) NSCountedSet *roiNodes;
@property (readonly, nonatomic) NSCountedSet *businessNodes;
@property (readonly, nonatomic) NSCountedSet *publicEventNodes;
@property (readonly, nonatomic) NSCountedSet *performerNodes;
@property (readonly, nonatomic) NSMutableDictionary *datesByAddressNode;
@property (readonly, nonatomic) NSCountedSet *addressNodes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_accumulateKnowledgeNodesFromMomentNodes:(id)a0 progressBlock:(id /* block */)a1;
- (void)_donateKnowledge:(id)a0 donationDate:(id)a1 loggingConnection:(id)a2;
- (void)_donateKnowledgeWithManager:(id)a0 progressBlock:(id /* block */)a1;
- (id)_knowledgeToDonateFromAccumulatedNodesWithProgressBlock:(id /* block */)a0;
- (id)_locationNamedEntitiesFromAddressNodes:(id)a0 dates:(id)a1 currentProgress:(double *)a2 progressFraction:(double)a3 progressBlock:(id /* block */)a4;
- (id)_namedEntitiesFromNamedEntityNodes:(id)a0 currentProgress:(double *)a1 progressFraction:(double)a2 progressBlock:(id /* block */)a3;
- (void)_prepareForKnowledgeDonation;
- (BOOL)_shouldProcessGraphUpdate:(id)a0;
- (id)_topicsFromTopicNodes:(id)a0 currentProgress:(double *)a1 progressFraction:(double)a2 progressBlock:(id /* block */)a3;
- (void)enrichDataModelWithManager:(id)a0 curationContext:(id)a1 graphUpdateInventory:(id)a2 progressBlock:(id /* block */)a3;

@end
