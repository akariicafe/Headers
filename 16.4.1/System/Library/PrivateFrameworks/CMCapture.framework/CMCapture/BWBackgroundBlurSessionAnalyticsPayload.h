@class NSString;

@interface BWBackgroundBlurSessionAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>

@property (copy, nonatomic) NSString *clientApplicationID;
@property (nonatomic) long long effectQuality;
@property (nonatomic) double averageProcessingTime;
@property (nonatomic) double maxProcessingTime;
@property (nonatomic) long long numberOfFrames;
@property (nonatomic) int numberOfFrameDrops;
@property (nonatomic) int maxThermalSystemPressureLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)eventName;
- (id)eventDictionary;
- (void)dealloc;
- (id)init;
- (void)reset;

@end
