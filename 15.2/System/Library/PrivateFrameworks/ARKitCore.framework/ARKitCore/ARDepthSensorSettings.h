@class NSString;

@interface ARDepthSensorSettings : ARImageSensorSettings

@property (retain, nonatomic) NSString *timeOfFlightProjectorMode;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithVideoFormat:(id)a0;

@end
