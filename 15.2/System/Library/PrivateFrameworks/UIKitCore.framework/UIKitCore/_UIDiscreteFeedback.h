@class NSString;

@interface _UIDiscreteFeedback : _UIFeedback <_UIFeedbackDiscretePlayable>

@property (nonatomic) long long type;
@property (readonly, nonatomic, getter=isHighPriority) BOOL highPriority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)discreteFeedbackForType:(long long)a0;
+ (id)type;

- (id)initWithDictionaryRepresentation:(id)a0;
- (id)_playableProtocol;
- (BOOL)isPlaying;
- (unsigned long long)_effectiveEventType;
- (unsigned int)_effectiveSystemSoundID;
- (BOOL)isEqual:(id)a0;
- (id)_debugDictionary;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;

@end
