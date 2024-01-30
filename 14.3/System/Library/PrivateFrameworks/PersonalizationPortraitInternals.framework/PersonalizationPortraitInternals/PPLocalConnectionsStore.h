@class PPConnectionsDonationStore, NSCache, PPConnectionsPredictionStore;

@interface PPLocalConnectionsStore : NSObject <PPFeedbackAccepting, PPFeedbackProcessing> {
    PPConnectionsPredictionStore *_predictionStore;
    PPConnectionsDonationStore *_donationStore;
    NSCache *_identifierToSourceBundleMap;
    NSCache *_nameToIdentifierMap;
}

+ (id)defaultStore;

- (void)processfeedbackItems:(id)a0 scoringDate:(id)a1 clientIdentifier:(id)a2 clientBundleId:(id)a3 mappingId:(id)a4;
- (id)init;
- (void).cxx_destruct;
- (void)registerFeedback:(id)a0 completion:(id /* block */)a1;
- (id)recentLocationsForConsumer:(unsigned long long)a0 criteria:(id)a1 limit:(unsigned long long)a2 explanationSet:(id)a3 timeout:(unsigned long long)a4 error:(id *)a5;
- (void)_immediateProcessingOfFeedback:(id)a0;
- (id)recentLocationDonationsSinceDate:(id)a0 error:(id *)a1;
- (id)initWithPredictionStore:(id)a0 donationStore:(id)a1;

@end
