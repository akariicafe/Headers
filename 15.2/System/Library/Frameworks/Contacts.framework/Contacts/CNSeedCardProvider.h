@interface CNSeedCardProvider : NSObject

+ (id)dataForCountryCode:(id)a0;
+ (id)bundleWithSeedCards;
+ (id)dataForEveryCountry;
+ (id)nearestAvailableDataForCountryCode:(id)a0;

@end
