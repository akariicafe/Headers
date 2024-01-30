@interface FUUtils : NSObject

+ (id)convertFlightModel:(id)a0 withError:(id *)a1;
+ (void)extractTimeForFlightStep:(id)a0 fromLeg:(id)a1;
+ (id)airportFromSFAirport:(id)a0;
+ (id)testDate;
+ (void)setTestDate:(id)a0;
+ (void)enumerateFlightCodesInString:(id)a0 usingBlock:(id /* block */)a1;

@end
