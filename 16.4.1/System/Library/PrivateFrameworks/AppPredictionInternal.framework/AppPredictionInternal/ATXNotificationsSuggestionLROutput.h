@class NSDictionary, NSSet;

@interface ATXNotificationsSuggestionLROutput : NSObject <MLFeatureProvider>

@property (nonatomic) long long wantTurnOff;
@property (retain, nonatomic) NSDictionary *turnOffProbability;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithWantTurnOff:(long long)a0 turnOffProbability:(id)a1;

@end
