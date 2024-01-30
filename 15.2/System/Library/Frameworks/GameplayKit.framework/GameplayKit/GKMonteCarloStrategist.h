@class NSString;
@protocol GKRandom, GKGameModel;

@interface GKMonteCarloStrategist : NSObject <GKStrategist> {
    struct GKCMonteCarloStrategist { id x0; id x1; unsigned long long x2; unsigned long long x3; BOOL x4; BOOL x5; } *_monteCarloStrategist;
}

@property (nonatomic) unsigned long long budget;
@property (nonatomic) unsigned long long explorationParameter;
@property (retain, nonatomic) id<GKGameModel> gameModel;
@property (retain, nonatomic) id<GKRandom> randomSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
