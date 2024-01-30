@class NSArray, NSString, NSMutableDictionary, NSMutableArray;

@interface PMLTrainingMock : NSObject <PMLTrainingProtocol> {
    NSMutableArray *_internalCollectedSessions;
    NSMutableDictionary *_lastTrainingFeaturizations;
}

@property (readonly, nonatomic) NSArray *collectedSessions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)planReceivedWithPayload:(id)a0 error:(id *)a1;
- (void)updateSessionsAndLabelForModel:(id)a0 block:(id /* block */)a1;
- (void)deleteSessionsWithIdentifiers:(id)a0 bundleID:(id)a1;
- (void)deleteSessionsWithDomainIdentifiers:(id)a0 bundleID:(id)a1;
- (id)init;
- (void)updateLastTrainingFeaturizationForModel:(id)a0 andData:(id)a1;
- (void).cxx_destruct;
- (void)addSessionWithCovariates:(id)a0 label:(long long)a1 sessionDescriptor:(id)a2 spotlightReference:(id)a3 isInternal:(BOOL)a4;
- (void)deleteSessionsWithBundleID:(id)a0;
- (id)lastTrainingFeaturizationForModelName:(id)a0 andLocale:(id)a1;
- (void)setSourceRecoverer:(id /* block */)a0;
- (void)addSessionWithCovariates:(id)a0 source:(id)a1 label:(long long)a2 sessionDescriptor:(id)a3 spotlightReference:(id)a4 isInternal:(BOOL)a5;
- (void)trimDbWithDeferralBlock:(id /* block */)a0;
- (id)planReceivedWithRecipe:(id)a0 attachments:(id)a1 error:(id *)a2;
- (void)clearCollectedSessions;

@end
