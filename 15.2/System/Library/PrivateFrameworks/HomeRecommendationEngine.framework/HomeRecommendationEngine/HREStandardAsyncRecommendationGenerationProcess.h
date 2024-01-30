@class HMHome, NSSet;

@interface HREStandardAsyncRecommendationGenerationProcess : NSObject

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) NSSet *sourceItems;
@property (retain, nonatomic) NSSet *sourceRecommendableObjects;
@property (retain, nonatomic) NSSet *homeRecommendableObjects;
@property (nonatomic) unsigned long long options;

- (void).cxx_destruct;
- (id)generateRecommendations;
- (BOOL)shouldGenerateRecommendations;
- (id)initWithHome:(id)a0 sourceItems:(id)a1 options:(unsigned long long)a2;

@end
