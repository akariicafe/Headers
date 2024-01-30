@class NSString, CMMotionAlarmManager;

@interface CMMotionAlarm : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long alarmId;
@property (retain, nonatomic) NSString *bundleId;
@property (nonatomic) int state;
@property (retain, nonatomic) CMMotionAlarmManager *manager;
@property (readonly, retain, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int duration;
@property (readonly, nonatomic) BOOL repeats;
@property (readonly, nonatomic) unsigned int type;

- (BOOL)unregisterWithError:(id *)a0;
- (id)initWithName:(id)a0 type:(unsigned int)a1 duration:(unsigned int)a2 repeats:(BOOL)a3 alarmId:(unsigned long long)a4 bundleId:(id)a5 state:(int)a6;
- (void)encodeWithCoder:(id)a0;
- (BOOL)acknowledgeWithError:(id *)a0;
- (id)description;
- (void)copyPropertiesFromAlarm:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithName:(id)a0 type:(unsigned int)a1 duration:(unsigned int)a2 repeats:(BOOL)a3;
- (BOOL)isValid;

@end
