@class SCLContact;

@interface SCLMutableInterruptEvent : SCLInterruptEvent

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long urgency;
@property (copy, nonatomic) SCLContact *sender;
@property (nonatomic) BOOL shouldAlwaysInterrupt;

- (void)setSender:(id)a0;
- (void)setShouldAlwaysInterrupt:(BOOL)a0;
- (void)setUrgency:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setType:(unsigned long long)a0;

@end
