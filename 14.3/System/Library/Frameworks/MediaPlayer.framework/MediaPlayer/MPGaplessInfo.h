@interface MPGaplessInfo : NSObject

@property (nonatomic) unsigned long long durationInFrames;
@property (nonatomic) unsigned int encodingDelayInFrames;
@property (nonatomic) unsigned int encodingDrainInFrames;
@property (nonatomic) unsigned int heuristicInfo;
@property (nonatomic) unsigned long long lastPacketsResync;

@end
