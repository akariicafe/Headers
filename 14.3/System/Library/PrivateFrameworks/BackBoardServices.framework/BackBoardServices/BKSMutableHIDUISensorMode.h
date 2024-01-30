@class NSString;

@interface BKSMutableHIDUISensorMode : BKSHIDUISensorMode

@property (nonatomic) BOOL estimatedProximityMode;
@property (nonatomic) long long versionedPID;
@property (retain, nonatomic) NSString *reason;
@property (nonatomic) unsigned long long changeSource;
@property (nonatomic) int proximityDetectionMode;
@property (nonatomic) BOOL postEventWithCurrentDetectionMask;
@property (nonatomic) BOOL digitizerEnabled;
@property (nonatomic) BOOL pocketTouchesExpected;
@property (nonatomic) BOOL tapToWakeEnabled;
@property (nonatomic) BOOL coverGestureEnabled;
@property (nonatomic) BOOL alwaysOnGesturesEnabled;

- (id)initWithReason:(id)a0;
- (void)setDigitizerEnabled:(BOOL)a0;
- (void)setTapToWakeEnabled:(BOOL)a0;
- (void)setCoverGestureEnabled:(BOOL)a0;
- (void)setAlwaysOnGesturesEnabled:(BOOL)a0;
- (void)setEstimatedProximityMode:(BOOL)a0;
- (void)setPostEventWithCurrentDetectionMask:(BOOL)a0;
- (void)setPocketTouchesExpected:(BOOL)a0;
- (void)setProximityDetectionMode:(int)a0;
- (void)setChangeSource:(unsigned long long)a0;
- (void)setReason:(id)a0;
- (void)setVersionedPID:(long long)a0;

@end
