@class NSString;

@interface ARDepthSensorSettings : ARImageSensorSettings

@property (retain, nonatomic) NSString *timeOfFlightProjectorMode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithVideoFormat:(id)a0;

@end
