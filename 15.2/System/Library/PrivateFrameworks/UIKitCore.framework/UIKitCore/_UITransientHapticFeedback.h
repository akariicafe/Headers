@class NSString;

@interface _UITransientHapticFeedback : _UIFeedback <_UIFeedbackDiscretePlayable, _UIFeedbackTransientHaptic_Internal, _UIFeedbackCoreHapticsPlayerReuse_Internal>

@property (readonly, nonatomic, getter=isHighPriority) BOOL highPriority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) float intensity;
@property (readonly, nonatomic) float sharpness;
@property (readonly, nonatomic) BOOL canReuseCoreHapticsPlayer;

+ (BOOL)supportsSecureCoding;
+ (id)transientHapticFeedbackWithIntensity:(float)a0 sharpness:(float)a1;
+ (id)type;

- (id)initWithDictionaryRepresentation:(id)a0;
- (id)_playableProtocol;
- (unsigned long long)_effectivePlayableFeedbackTypes;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;

@end
