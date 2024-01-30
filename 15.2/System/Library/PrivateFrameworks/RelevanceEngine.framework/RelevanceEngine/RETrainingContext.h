@class RERelevanceEngine, REConcurrentDictionary, RERemoteTrainingContext;

@interface RETrainingContext : NSObject <RETrainingSimulationCoordinator> {
    RERelevanceEngine *_relevanceEngine;
    REConcurrentDictionary *_attributes;
    RERemoteTrainingContext *_remoteContext;
}

@property (readonly, nonatomic) RETrainingContext *attributeContext;
@property (readonly, nonatomic) BOOL _wantsAutomaticRemoteContextForwarding;
@property (retain, nonatomic) RERemoteTrainingContext *remoteContext;
@property (retain) RETrainingContext *cachedAttributeContext;
@property (readonly, nonatomic) RERelevanceEngine *relevanceEngine;
@property (readonly, nonatomic) BOOL isCurrent;

- (void)setAttribute:(id)a0 forKey:(id)a1;
- (void)becomeCurrent;
- (void).cxx_destruct;
- (id)attributeForKey:(id)a0;
- (id)init;
- (void)flushTraining;
- (void)dealloc;
- (void)trainWithUnmanagedElement:(id)a0 isPositiveEvent:(BOOL)a1 interaction:(id)a2;
- (void)_didBecomeCurrent;
- (void)_didResignCurrent;
- (void)_configureForRelevanceEngine:(id)a0;
- (void)_willResignCurrent;
- (void)_willBecomeCurrent;
- (void)_trainElementWithIdentifier:(id)a0 isPositiveEvent:(BOOL)a1 interaction:(id)a2;
- (void)_trainElement:(id)a0 isPositiveEvent:(BOOL)a1 interaction:(id)a2;
- (void)trainWithElement:(id)a0 isPositiveEvent:(BOOL)a1 interaction:(id)a2;
- (BOOL)performSimulationCommand:(id)a0 withOptions:(id)a1;

@end
