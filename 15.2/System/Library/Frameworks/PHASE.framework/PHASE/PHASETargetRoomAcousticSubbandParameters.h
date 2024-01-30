@interface PHASETargetRoomAcousticSubbandParameters : NSObject

@property (nonatomic) double frequency;
@property (nonatomic) double rt60;
@property (nonatomic) double earlyRoomEqDb;
@property (nonatomic) double lateRoomEqDb;
@property (nonatomic) double confidence;

- (id)init;

@end
