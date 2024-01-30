@class NSString;

@interface _UIContinuousFeedback : _UIFeedback <_UIFeedbackContinuousPlayable>

@property (nonatomic) long long type;
@property (nonatomic) double duration;
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)type;
+ (id)continuousFeedbackForType:(long long)a0;

- (id)initWithDictionaryRepresentation:(id)a0;
- (id)_playableProtocol;
- (unsigned long long)_effectiveEventType;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)_debugDictionary;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)_effectiveDuration;
- (void)_playedAtTime:(double)a0 engine:(id)a1;
- (id)dictionaryRepresentation;

@end
