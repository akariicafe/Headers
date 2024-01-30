@class NSTimer, NSMutableArray, NSString;

@interface _UIFeedbackPattern : _UIFeedback <_UIFeedbackDiscretePlayable, _UIFeedbackContinuousPlayable>

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

- (void)play;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void)stop;
- (void)addFeedback:(id)a0 atTime:(double)a1;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)setPosition:(float)a0;
- (void)_playPattern;
- (id)_debugDictionary;
- (unsigned long long)_effectivePlayableFeedbackTypes;
- (id)_individualFeedbacks;
- (id)_playableProtocol;
- (id)_allSystemSoundIDs;
- (id)_allEventTypes;

@end
