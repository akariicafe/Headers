@class NSString;

@interface ICSTimeZone : ICSComponent {
    id _systemTimeZone;
}

@property (retain, nonatomic) NSString *tzid;

+ (id)name;
+ (id)timeZoneWithSystemTimeZoneName:(id)a0;
+ (BOOL)_isTimeZone:(id)a0 pseudoDSTForDate:(id)a1;
+ (id)blocksAfterDate:(id)a0 untilDate:(id)a1 forTimeZone:(id)a2;
+ (long long)matchTypeForSubarray:(id)a0 inTZChangeArray:(id)a1;
+ (BOOL)perfectMatchForSubarray:(id)a0 inTZChangeArray:(id)a1;
+ (id)quickTimeZoneNames;
+ (id)slowTimeZoneNames;

- (void).cxx_destruct;
- (id)systemTimeZoneForDate:(id)a0;
- (id)_previousDSTTransitionForDate:(id)a0 timezone:(id)a1;
- (id)computeTimeZoneChangeListFromDate:(id)a0 toDate:(id)a1;
- (id)getNSTimeZone:(id)a0;
- (id)getNSTimeZoneFromDate:(id)a0 toDate:(id)a1;
- (id)initWithSystemTimeZone:(id)a0;
- (id)initWithSystemTimeZone:(id)a0 fromDate:(id)a1 options:(int)a2;
- (id)initWithTimeZone:(id)a0 fromDate:(id)a1 options:(int)a2;
- (BOOL)isEqualToNSTimeZone:(id)a0 forDate:(id)a1;

@end
