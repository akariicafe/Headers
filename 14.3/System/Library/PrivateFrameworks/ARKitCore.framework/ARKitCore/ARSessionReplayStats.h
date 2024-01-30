@class NSString;

@interface ARSessionReplayStats : NSObject

@property (nonatomic) int recordingFormat;
@property (retain, nonatomic) NSString *deviceModel;
@property (retain, nonatomic) NSString *osVersion;
@property (retain, nonatomic) NSString *arkitVersion;
@property (retain, nonatomic) NSString *fileName;
@property (nonatomic) unsigned long long recordedSensorTypes;

- (void).cxx_destruct;

@end
