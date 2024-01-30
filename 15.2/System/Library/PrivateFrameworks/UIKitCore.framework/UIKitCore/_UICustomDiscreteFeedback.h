@interface _UICustomDiscreteFeedback : _UIDiscreteFeedback

@property (readonly, nonatomic) unsigned long long eventType;
@property (readonly, nonatomic) unsigned int systemSoundID;

+ (id)customDiscreteFeedbackWithEventType:(unsigned long long)a0 systemSoundID:(unsigned int)a1;
+ (id)type;

- (id)initWithDictionaryRepresentation:(id)a0;
- (unsigned long long)_effectiveEventType;
- (unsigned int)_effectiveSystemSoundID;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;

@end
