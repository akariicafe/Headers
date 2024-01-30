@interface SCLState : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic, getter=isScheduleEnabled) BOOL scheduleEnabled;
@property (readonly, nonatomic, getter=isInSchedule) BOOL inSchedule;
@property (readonly, nonatomic) unsigned long long activeState;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithActiveState:(unsigned long long)a0 scheduleEnabled:(BOOL)a1 inSchedule:(BOOL)a2;
- (id)initWithActive:(BOOL)a0 scheduleEnabled:(BOOL)a1 inSchedule:(BOOL)a2;

@end
