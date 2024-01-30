@class NSString, NSDictionary;

@interface KVSimulatedPriorRetriever : NSObject <KVPriorRetriever> {
    NSDictionary *_simulatedPriors;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)allPriorInfoWithThreshold:(unsigned int)a0;
- (id)initWithSimulatedPriors:(id)a0;
- (id)priorInfoForItemIds:(id)a0;

@end
