@interface CMStrideCalibrationEntryInternal : CMStrideCalibrationEntry

@property (readonly, nonatomic) unsigned int pacebin;
@property (readonly, nonatomic) double kvalue;
@property (readonly, nonatomic) double kvalueTrack;
@property (readonly, nonatomic) double score;
@property (readonly, nonatomic) int session;

- (id)description;

@end
