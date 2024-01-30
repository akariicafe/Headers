@interface SCLState : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic, getter=isScheduleEnabled) BOOL scheduleEnabled;
@property (readonly, nonatomic, getter=isInSchedule) BOOL inSchedule;
@property (readonly, nonatomic) unsigned long long activeState;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithActive:(BOOL)a0 scheduleEnabled:(BOOL)a1 inSchedule:(BOOL)a2;
- (id)initWithActiveState:(unsigned long long)a0 scheduleEnabled:(BOOL)a1 inSchedule:(BOOL)a2;

@end
