@class ARLocationData, NSString;
@protocol ARSensorDelegate;

@interface ARRemoteLocationSensor : ARRemoteSensor <ARLocationSensorProtocol>

@property (readonly, nonatomic) ARLocationData *currentLocation;
@property (weak, nonatomic) id<ARSensorDelegate> delegate;
@property (nonatomic) unsigned long long powerUsage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

@end
