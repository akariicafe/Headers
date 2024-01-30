@class NSString;

@interface ARDepthSensorSettings : ARImageSensorSettings

@property (retain, nonatomic) NSString *timeOfFlightProjectorMode;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithVideoFormat:(id)a0;

@end
