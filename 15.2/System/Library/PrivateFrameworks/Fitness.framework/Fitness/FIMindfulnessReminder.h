@class NSDateComponents;

@interface FIMindfulnessReminder : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDateComponents *customDateComponents;
@property (readonly, nonatomic) unsigned long long customWeekdaySelection;
@property (readonly, nonatomic) BOOL enabled;
@property (readonly, nonatomic) long long type;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(long long)a0;
- (id)_typeDescription;
- (unsigned long long)hash;
- (id)initWithType:(long long)a0 customDateComponents:(id)a1 customWeekdaySelection:(unsigned long long)a2 enabled:(BOOL)a3;
- (id)initWithType:(long long)a0 customDateComponents:(id)a1;

@end
