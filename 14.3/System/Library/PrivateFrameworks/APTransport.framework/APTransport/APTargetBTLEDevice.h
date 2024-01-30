@class NSUUID;

@interface APTargetBTLEDevice : NSObject

@property (retain, nonatomic) NSUUID *deviceID;
@property (nonatomic) BOOL isSoloCapable;
@property (nonatomic) BOOL supportsMediaControlPort;
@property (nonatomic) struct { unsigned char flags; unsigned char config; unsigned char ipv4[4]; } lastData;
@property (nonatomic) unsigned long long lastBeaconTicks;
@property (nonatomic) int lastRSSI;
@property (nonatomic) BOOL isFirmwareTracked;
@property (nonatomic) BOOL requestedTracking;

- (void)dealloc;

@end
