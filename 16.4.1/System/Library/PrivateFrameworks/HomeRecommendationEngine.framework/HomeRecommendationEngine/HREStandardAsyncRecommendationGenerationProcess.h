@class HMHome, NSSet, HFAccessoryTypeGroup;

@interface HREStandardAsyncRecommendationGenerationProcess : NSObject

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) NSSet *sourceItems;
@property (retain, nonatomic) HFAccessoryTypeGroup *typeGroup;
@property (retain, nonatomic) NSSet *sourceRecommendableObjects;
@property (retain, nonatomic) NSSet *homeRecommendableObjects;
@property (nonatomic) unsigned long long options;

- (void).cxx_destruct;
- (id)generateRecommendations;
- (id)initWithHome:(id)a0 sourceItems:(id)a1 accessoryTypeGroup:(id)a2 options:(unsigned long long)a3;
- (BOOL)shouldGenerateRecommendations;

@end
