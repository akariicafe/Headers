@interface CNSeedCardProvider : NSObject

+ (id)bundleWithSeedCards;
+ (id)dataForCountryCode:(id)a0;
+ (id)dataForEveryCountry;
+ (id)nearestAvailableDataForCountryCode:(id)a0;

@end
