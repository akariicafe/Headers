@class NSString;

@interface _UIDiscreteFeedback : _UIFeedback <_UIFeedbackDiscretePlayable>

@property (nonatomic) long long type;
@property (readonly, nonatomic, getter=isHighPriority) BOOL highPriority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)type;
+ (id)discreteFeedbackForType:(long long)a0;

- (BOOL)isPlaying;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned int)_effectiveSystemSoundID;
- (id)_debugDictionary;
- (id)_playableProtocol;
- (unsigned long long)_effectiveEventType;

@end
