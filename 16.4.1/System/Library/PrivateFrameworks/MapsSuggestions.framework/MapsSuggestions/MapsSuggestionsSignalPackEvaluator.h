@class MapsSuggestionsSignalPack;

@interface MapsSuggestionsSignalPackEvaluator : NSObject {
    MapsSuggestionsSignalPack *_signalPack;
}

+ (id)evaluatorFromSignalPack:(id)a0;

- (BOOL)hasCarPlayInfo;
- (double)isTransitUserHereConfidence;
- (BOOL)userHasAPaymentCard;
- (BOOL)isHotWeather;
- (BOOL)isLowChanceOfRaining;
- (BOOL)isHighChanceOfRaining;
- (BOOL)hasSignalForHasATransitCard;
- (BOOL)hasWeatherPrecipitationInfo;
- (BOOL)userHasATransitCard;
- (BOOL)hasSignalForPaymentCard;
- (BOOL)hasWeatherInfo;
- (BOOL)isRideSharingAppsInstalled;
- (BOOL)isCarPlayConnected;
- (BOOL)hasTransitInfo;
- (BOOL)isUserPreferenceTransit;
- (id)initWithSignalPack:(id)a0;
- (BOOL)isMapTypeTransit;
- (BOOL)isEasilyWalkable;
- (BOOL)hasUserTransportTypePreferenceInfo;
- (BOOL)isColdWeather;
- (BOOL)isUserPreferenceDriving;
- (BOOL)hasSignalForExpressPaymentCard;
- (BOOL)isTouristHere;
- (BOOL)isWalkable;
- (BOOL)userHasAnExpressPaymentCard;
- (BOOL)isTransitCurrentlyPossible;
- (BOOL)isUserPreferenceRidesharing;
- (BOOL)hasTouristInfo;
- (BOOL)isLowChanceOfSnowing;
- (BOOL)hasWeatherTemperatureInfo;
- (BOOL)hasRidesharingInfo;
- (BOOL)hasDistanceFromHereToOriginInfo;
- (BOOL)hasDistanceFromOriginToDestinationInfo;
- (BOOL)isMildWeather;
- (BOOL)isBadWeather;
- (BOOL)isHighChanceOfSnowing;
- (double)isTransitUserConfidence;
- (BOOL)isUserPreferenceWalking;
- (void).cxx_destruct;
- (BOOL)hasMapTypeInfo;
- (BOOL)hasDistanceFromHereToDestinationInfo;

@end
