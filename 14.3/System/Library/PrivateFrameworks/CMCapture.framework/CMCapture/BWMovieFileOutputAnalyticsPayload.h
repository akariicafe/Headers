@class NSDictionary, NSString;

@interface BWMovieFileOutputAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>

@property (nonatomic) int activeDeviceMask;
@property (nonatomic) int devicePosition;
@property (nonatomic) int videoOrientation;
@property (nonatomic) BOOL videoMirrored;
@property (nonatomic) int deviceType;
@property (nonatomic) int clientIDType;
@property (nonatomic) double duration;
@property (nonatomic) double durationFront;
@property (nonatomic) double durationRearWide;
@property (nonatomic) double durationRearTele;
@property (nonatomic) double durationRearSuperWide;
@property (nonatomic) float nominalFramerate;
@property (nonatomic) int height;
@property (nonatomic) int width;
@property (nonatomic) struct BWCoreAnalyticsMovieRecordingSphereAFStatistics { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; unsigned int x28; unsigned int x29; unsigned int x30; } *sphereAFStatistics;
@property (retain, nonatomic) NSDictionary *sphereModeByPortType;
@property (retain, nonatomic) NSDictionary *APSModeByPortType;
@property (retain, nonatomic) NSDictionary *variableFrameRateStatistics;
@property (nonatomic) BOOL afDriverShortOccurred;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)eventName;
- (id)init;
- (void)reset;
- (void)dealloc;
- (id)eventDictionary;

@end
