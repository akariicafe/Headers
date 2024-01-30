@class NSString, NSArray;

@interface PLPowerNode : NSObject

@property (retain) NSString *name;
@property double fgEnergy;
@property double bgEnergy;
@property double fgTime;
@property double bgTime;
@property double bgAudioTime;
@property double bgLocationTime;
@property (retain) NSArray *rootNodeEnergyRows;

- (id)time;
- (id)serialize;
- (void).cxx_destruct;
- (id)energy;
- (id)initWithName:(id)a0 withFGEnergy:(double)a1 withBGEnergy:(double)a2 withFGTime:(double)a3 withBGTime:(double)a4 withBGAudioTime:(double)a5 withBGLocationTime:(double)a6 withRootNodeEnergyRows:(id)a7;

@end
