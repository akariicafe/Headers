@class NSString;

@interface BKSHIDUISensorMode : NSObject <BSDescriptionStreamable> {
    NSString *_reason;
    long long _versionedPID;
    unsigned long long _changeSource;
    int _proximityDetectionMode;
    BOOL _digitizerEnabled;
    BOOL _pocketTouchesExpected;
    BOOL _tapToWakeEnabled;
    BOOL _coverGestureEnabled;
    BOOL _alwaysOnGesturesEnabled;
    BOOL _estimatedProximityMode;
    BOOL _postEventWithCurrentDetectionMask;
}

@property (readonly, nonatomic, getter=isRestrictedToSystemShell) BOOL restrictedToSystemShell;
@property (readonly, nonatomic) BOOL estimatedProximityMode;
@property (readonly, nonatomic) long long versionedPID;
@property (readonly, nonatomic) NSString *reason;
@property (readonly, nonatomic) unsigned long long changeSource;
@property (readonly, nonatomic) BOOL postEventWithCurrentDetectionMask;
@property (readonly, nonatomic) int proximityDetectionMode;
@property (readonly, nonatomic) BOOL digitizerEnabled;
@property (readonly, nonatomic) BOOL pocketTouchesExpected;
@property (readonly, nonatomic) BOOL tapToWakeEnabled;
@property (readonly, nonatomic) BOOL coverGestureEnabled;
@property (readonly, nonatomic) BOOL alwaysOnGesturesEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_prevailingMode:(id)a0;
+ (id)buildModeForReason:(id)a0 builder:(id /* block */)a1;
+ (id)new;
+ (id)protobufSchema;

- (id)initForProtobufDecoding;
- (void)appendDescriptionToFormatter:(id)a0;
- (id)_initCopyFrom:(id)a0;
- (id)init;
- (id)mutableCopy;
- (BOOL)isEffectivelyEqualToMode:(id)a0;
- (long long)_comparisonScore;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
