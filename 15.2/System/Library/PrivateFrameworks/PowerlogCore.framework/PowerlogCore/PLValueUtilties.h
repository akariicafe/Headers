@interface PLValueUtilties : NSObject

+ (short)formatterFromDataType:(id)a0;
+ (long long)compare:(id)a0 with:(id)a1;
+ (BOOL)isFormater:(short)a0 validForObject:(id)a1;
+ (id)formattedStringForDate:(id)a0;
+ (BOOL)isNil:(id)a0;
+ (void)resetTimestampFormaterTimezone;

@end
