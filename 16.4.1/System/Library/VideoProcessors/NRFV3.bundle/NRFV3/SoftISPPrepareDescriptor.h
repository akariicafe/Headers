@interface SoftISPPrepareDescriptor : NSObject

@property (nonatomic) unsigned int inputPixelFormat;
@property (nonatomic) unsigned short sensorID;
@property (nonatomic) unsigned long long maximumWidth;
@property (nonatomic) unsigned long long maximumHeight;
@property (nonatomic) int stageConfigMode;

- (id)init;
- (id)description;

@end
