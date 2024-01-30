@class NSString, NSSet;

@interface BKSHIDUISensorMode : NSObject <BSDescriptionStreamable> {
    NSString *_reason;
    long long _versionedPID;
    unsigned long long _changeSource;
    int _proximityDetectionMode;
    BOOL _digitizerEnabled;
    BOOL _pocketTouchesExpected;
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
@property (readonly, copy, nonatomic) NSSet *multitouchHostStateKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)_prevailingMode:(id)a0;
+ (id)buildModeForReason:(id)a0 builder:(id /* block */)a1;
+ (id)protobufSchema;

- (void)encodeWithCoder:(id)a0;
- (BOOL)_settingKeysAllowed:(id)a0;
- (id)mutableCopy;
- (id)_initCopyFrom:(id)a0;
- (id)didFinishProtobufDecodingWithError:(out id *)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)_init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEffectivelyEqualToMode:(id)a0;
- (id)initForProtobufDecoding;
- (long long)_comparisonScore;
- (void)appendDescriptionToFormatter:(id)a0;

@end
