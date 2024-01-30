@class HMHome, NSSet;

@interface HREStandardAsyncRecommendationGenerationProcess : NSObject

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) NSSet *sourceItems;
@property (retain, nonatomic) NSSet *sourceActionObjects;
@property (nonatomic) unsigned long long options;

- (void).cxx_destruct;
- (BOOL)shouldGenerateRecommendations;
- (id)generateRecommendations;
- (id)initWithHome:(id)a0 sourceItems:(id)a1 options:(unsigned long long)a2;

@end
