@class NSMutableDictionary;

@interface AdAnalyzer : NSObject

@property (retain, nonatomic) NSMutableDictionary *adSequences;

+ (id)sharedInstance;
+ (long long)nextSequenceNumberForAd:(id)a0;
+ (void)clearSequenceNumbersForAd:(id)a0;
+ (void)startAdAnalytics:(id)a0;
+ (void)stopAdAnalytics:(id)a0;
+ (void)captureAdAnalyticsEvent:(id)a0 event:(id)a1 completion:(id /* block */)a2;

- (id)init;
- (void).cxx_destruct;
- (void)captureEvent:(id)a0 event:(id)a1 completion:(id /* block */)a2;

@end
