@class NSTimeZone, NSCalendar, NSDateInterval, SCLScheduleTime, SCLScheduleRecurrence;

@interface SCLUnlockHistoryItem : NSObject <NSCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDateInterval *unlockedInterval;
@property (readonly, nonatomic) NSCalendar *calendar;
@property (readonly, nonatomic) NSTimeZone *timeZone;
@property (readonly, nonatomic) SCLScheduleTime *scheduleStartTime;
@property (readonly, nonatomic) SCLScheduleTime *scheduleEndTime;
@property (readonly, nonatomic) SCLScheduleRecurrence *effectiveRecurrence;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithInterval:(id)a0 calendar:(id)a1 timeZone:(id)a2 startTime:(id)a3 endTime:(id)a4;
- (void)_loadEffectiveRecurrence;
- (id)initWithInterval:(id)a0 calendar:(id)a1 timeZone:(id)a2;

@end
