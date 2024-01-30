@interface CMSuppressionEvent : CMLogItem {
    long long fType;
    unsigned long long fReason;
}

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) unsigned long long reason;

+ (BOOL)supportsSecureCoding;
+ (id)stringForEventReason:(unsigned long long)a0;
+ (id)stringForEventType:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (id)initWithEventType:(long long)a0 reason:(unsigned long long)a1 timestamp:(double)a2;

@end
