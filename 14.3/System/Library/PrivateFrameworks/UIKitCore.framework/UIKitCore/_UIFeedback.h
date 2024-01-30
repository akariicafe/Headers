@class _UIFeedbackPattern, NSArray, NSString, _UIFeedbackParameters, NSDictionary, Protocol, NSMutableArray, NSIndexSet;
@protocol _UIFeedbackPlayer, UICoordinateSpace;

@interface _UIFeedback : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSMutableArray *systemSoundSources;
@property (readonly) NSMutableArray *visualizerSources;
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;
@property (weak, nonatomic, getter=_parentPattern, setter=_setParentPattern:) _UIFeedbackPattern *parentPattern;
@property (nonatomic, getter=_delay, setter=_setDelay:) double delay;
@property (readonly, nonatomic, getter=_debugDictionary) NSDictionary *debugDictionary;
@property (readonly, nonatomic, getter=_effectiveFeedbackData) NSArray *effectiveFeedbackData;
@property (copy, nonatomic, getter=_name, setter=_setName:) NSString *name;
@property (readonly, nonatomic, getter=_playableProtocol) Protocol *playableProtocol;
@property (retain, nonatomic, getter=_category, setter=_setCategory:) NSString *category;
@property (readonly, nonatomic, getter=_effectiveFeedbackTypes) unsigned long long effectiveFeedbackTypes;
@property (readonly, nonatomic, getter=_effectiveEnabledFeedbackTypes) unsigned long long effectiveEnabledFeedbackTypes;
@property (readonly, nonatomic, getter=_effectivePlayableFeedbackTypes) unsigned long long effectivePlayableFeedbackTypes;
@property (readonly, nonatomic, getter=_effectiveEventType) unsigned long long effectiveEventType;
@property (readonly, nonatomic, getter=_effectiveSystemSoundID) unsigned int effectiveSystemSoundID;
@property (readonly, nonatomic, getter=_effectiveDuration) double effectiveDuration;
@property (readonly, nonatomic, getter=_effectiveDelay) double effectiveDelay;
@property (readonly, nonatomic, getter=_individualFeedbacks) NSArray *individualFeedbacks;
@property (readonly, nonatomic, getter=_allEventTypes) NSIndexSet *allEventTypes;
@property (readonly, nonatomic, getter=_allSystemSoundIDs) NSIndexSet *allSystemSoundIDs;
@property (nonatomic, getter=_eventToken, setter=_setEventToken:) unsigned long long eventToken;
@property (weak, nonatomic, getter=_coordinateSpace, setter=_setCoordinateSpace:) id<UICoordinateSpace> coordinateSpace;
@property (retain, nonatomic, getter=_player, setter=_setPlayer:) id<_UIFeedbackPlayer> player;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) _UIFeedbackParameters *audioParameters;
@property (readonly, nonatomic) _UIFeedbackParameters *hapticParameters;
@property (nonatomic) long long audioOutputMode;
@property (nonatomic) long long hapticOutputMode;
@property (nonatomic) float position;

+ (id)type;
+ (Class)classForType:(id)a0;
+ (Class)_parametersClass;
+ (id)feedbackWithDictionaryRepresentation:(id)a0;

- (void)play;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void)stop;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)_playedAtTime:(double)a0 engine:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
