@interface PFISO6709Parser : NSObject

+ (BOOL)parseISO6709String:(id)a0 outLatitudeNumber:(id *)a1 outLongitudeNumber:(id *)a2;
+ (BOOL)parseISO6709String:(id)a0 outLatitude:(double *)a1 outLongitude:(double *)a2;

@end
