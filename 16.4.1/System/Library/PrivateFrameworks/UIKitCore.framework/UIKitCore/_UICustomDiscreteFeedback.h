@interface _UICustomDiscreteFeedback : _UIDiscreteFeedback

@property (readonly, nonatomic) unsigned long long eventType;
@property (readonly, nonatomic) unsigned int systemSoundID;

+ (id)customDiscreteFeedbackWithEventType:(unsigned long long)a0 systemSoundID:(unsigned int)a1;
+ (id)type;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)_effectiveEventType;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (unsigned int)_effectiveSystemSoundID;

@end
