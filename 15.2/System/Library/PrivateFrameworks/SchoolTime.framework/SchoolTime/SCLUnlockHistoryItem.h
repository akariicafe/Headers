@class NSTimeZone, NSCalendar, NSDateInterval, SCLScheduleTime, SCLScheduleRecurrence;

@interface SCLUnlockHistoryItem : NSObject <NSCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDateInterval *unlockedInterval;
@property (readonly, nonatomic) NSCalendar *calendar;
@property (readonly, nonatomic) NSTimeZone *timeZone;
@property (readonly, nonatomic) SCLScheduleTime *scheduleStartTime;
@property (readonly, nonatomic) SCLScheduleTime *scheduleEndTime;
@property (readonly, nonatomic) SCLScheduleRecurrence *effectiveRecurrence;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithInterval:(id)a0 calendar:(id)a1 timeZone:(id)a2 startTime:(id)a3 endTime:(id)a4;
- (void)_loadEffectiveRecurrence;
- (id)initWithInterval:(id)a0 calendar:(id)a1 timeZone:(id)a2;

@end
