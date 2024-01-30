@class NSString, PPClientFeedbackHelper;

@interface PPConnectionsStore : NSObject <PPFeedbackAccepting, PPClientStore> {
    PPClientFeedbackHelper *_clientFeedbackHelper;
}

@property (retain, nonatomic) NSString *clientIdentifier;

- (id)init;
- (BOOL)iterRecentLocationDonationsSinceDate:(id)a0 client:(id)a1 error:(id *)a2 block:(id /* block */)a3;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)registerFeedback:(id)a0 completion:(id /* block */)a1;
- (BOOL)iterRecentLocationsForConsumer:(unsigned long long)a0 criteria:(id)a1 limit:(unsigned long long)a2 client:(id)a3 error:(id *)a4 block:(id /* block */)a5;
- (BOOL)iterRecentLocationsForConsumer:(unsigned long long)a0 criteria:(id)a1 limit:(unsigned long long)a2 explanationSet:(id)a3 client:(id)a4 error:(id *)a5 block:(id /* block */)a6;

@end
