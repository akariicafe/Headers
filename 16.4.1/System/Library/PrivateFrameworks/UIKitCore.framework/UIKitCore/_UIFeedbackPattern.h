@class NSTimer, NSMutableArray, NSString;

@interface _UIFeedbackPattern : _UIFeedback <_UIFeedbackDiscretePlayable, _UIFeedbackContinuousPlayable> {
    BOOL _canReuseCoreHapticsPlayer;
}

@property (retain, nonatomic) NSMutableArray *feedbacks;
@property (readonly, nonatomic) BOOL isRepeating;
@property (retain, nonatomic) NSTimer *repeatTimer;
@property (readonly, nonatomic, getter=isHighPriority) BOOL highPriority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double duration;
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;

+ (BOOL)supportsSecureCoding;
+ (id)type;
+ (id)feedbackPattern;
+ (Class)_parametersClass;

- (void)setPosition:(float)a0;
- (id)_debugDictionary;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void)stop;
- (BOOL)canReuseCoreHapticsPlayer;
- (void).cxx_destruct;
- (id)_playableProtocol;
- (void)play;
- (unsigned long long)_effectivePlayableFeedbackTypes;
- (id)_allEventTypes;
- (id)_allSystemSoundIDs;
- (id)_individualFeedbacks;
- (void)_playPattern;
- (void)addFeedback:(id)a0 atTime:(double)a1;
- (void)setCanReuseCoreHapticsPlayer:(BOOL)a0;

@end
