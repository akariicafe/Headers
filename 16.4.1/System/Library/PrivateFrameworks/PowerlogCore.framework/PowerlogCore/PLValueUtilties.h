@interface PLValueUtilties : NSObject

+ (BOOL)isFormater:(short)a0 validForObject:(id)a1;
+ (long long)compare:(id)a0 with:(id)a1;
+ (id)formattedStringForDate:(id)a0;
+ (short)formatterFromDataType:(id)a0;
+ (void)resetTimestampFormaterTimezone;
+ (BOOL)isNil:(id)a0;

@end
