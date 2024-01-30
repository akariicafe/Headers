@class MapsSuggestionsSignalPack;

@interface MapsSuggestionsSignalPackEvaluator : NSObject {
    MapsSuggestionsSignalPack *_signalPack;
}

+ (id)evaluatorFromSignalPack:(id)a0;

- (BOOL)hasUserTransportTypePreferenceInfo;
- (BOOL)isUserPreferenceDriving;
- (BOOL)isUserPreferenceTransit;
- (BOOL)isColdWeather;
- (id)initWithSignalPack:(id)a0;
- (BOOL)isLowChanceOfRaining;
- (BOOL)hasDistanceFromOriginToDestinationInfo;
- (BOOL)hasRidesharingInfo;
- (BOOL)hasDistanceFromHereToOriginInfo;
- (BOOL)isHighChanceOfRaining;
- (BOOL)isHotWeather;
- (BOOL)hasTransitInfo;
- (BOOL)hasCarPlayInfo;
- (BOOL)isUserPreferenceWalking;
- (BOOL)isLowChanceOfSnowing;
- (BOOL)hasWeatherInfo;
- (double)isTransitUserHereConfidence;
- (BOOL)isTransitCurrentlyPossible;
- (BOOL)isHighChanceOfSnowing;
- (BOOL)isEasilyWalkable;
- (double)isTransitUserConfidence;
- (BOOL)isTouristHere;
- (BOOL)hasWeatherTemperatureInfo;
- (void).cxx_destruct;
- (BOOL)hasDistanceFromHereToDestinationInfo;
- (BOOL)isBadWeather;
- (BOOL)isMapTypeTransit;
- (BOOL)hasMapTypeInfo;
- (BOOL)isCarPlayConnected;
- (BOOL)isUserPreferenceRidesharing;
- (BOOL)isWalkable;
- (BOOL)isMildWeather;
- (BOOL)hasWeatherPrecipitationInfo;
- (BOOL)isRideSharingAppsInstalled;
- (BOOL)hasTouristInfo;

@end
