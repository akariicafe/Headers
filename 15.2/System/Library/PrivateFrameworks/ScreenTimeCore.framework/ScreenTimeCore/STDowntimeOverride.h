@class NSCalendar, NSDate;

@interface STDowntimeOverride : NSObject <NSCopying>

@property (readonly) long long type;
@property (readonly) long long state;
@property (readonly, copy) NSDate *creationDate;
@property (readonly, copy) NSCalendar *calendar;
@property (readonly, copy) NSDate *endDate;

+ (id)overrideWithState:(long long)a0 creationDate:(id)a1 calendar:(id)a2 fixedDuration:(id)a3;
+ (id)overrideWithState:(long long)a0 creationDate:(id)a1 calendar:(id)a2 endDate:(id)a3;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isActiveAtDate:(id)a0;
- (id)_initWithType:(long long)a0 state:(long long)a1 creationDate:(id)a2 calendar:(id)a3 endDate:(id)a4;
- (BOOL)isExpiredAtDate:(id)a0;
- (BOOL)isEqualToDowntimeOverride:(id)a0;
- (long long)modificationBasedOnScheduleChangeAtDate:(id)a0;

@end
