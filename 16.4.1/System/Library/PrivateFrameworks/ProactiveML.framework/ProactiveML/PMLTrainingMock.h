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

- (void)deleteSessionsWithBundleID:(id)a0;
- (void)deleteSessionsWithIdentifiers:(id)a0 bundleID:(id)a1;
- (void)trimDbWithDeferralBlock:(id /* block */)a0;
- (id)lastTrainingFeaturizationForModelName:(id)a0 andLocale:(id)a1;
- (void)updateLastTrainingFeaturizationForModel:(id)a0 andData:(id)a1;
- (void)addSessionWithCovariates:(id)a0 label:(long long)a1 sessionDescriptor:(id)a2 spotlightReference:(id)a3 isInternal:(BOOL)a4;
- (void)deleteSessionsWithDomainIdentifiers:(id)a0 bundleID:(id)a1;
- (id)planReceivedWithPayload:(id)a0 error:(id *)a1;
- (id)init;
- (void)updateSessionsAndLabelForModel:(id)a0 block:(id /* block */)a1;
- (id)planReceivedWithRecipe:(id)a0 attachments:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (void)clearCollectedSessions;

@end
