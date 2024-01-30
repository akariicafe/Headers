@class MapsSuggestionsSignalPack;

@interface MapsSuggestionsSignalPackEvaluator : NSObject {
    MapsSuggestionsSignalPack *_signalPack;
}

+ (id)evaluatorFromSignalPack:(id)a0;

- (id)initWithSignalPack:(id)a0;
- (BOOL)isTouristHere;
- (BOOL)isLowChanceOfRaining;
- (BOOL)isRideSharingAppsInstalled;
- (BOOL)isUserPreferenceTransit;
- (BOOL)isEasilyWalkable;
- (BOOL)hasDistanceFromHereToDestinationInfo;
- (BOOL)isHotWeather;
- (void).cxx_destruct;
- (BOOL)isHighChanceOfRaining;
- (BOOL)isMildWeather;
- (BOOL)isMapTypeTransit;
- (BOOL)isWalkable;
- (BOOL)hasCarPlayInfo;
- (BOOL)isTransitCurrentlyPossible;
- (BOOL)hasTouristInfo;
- (BOOL)isHighChanceOfSnowing;
- (BOOL)isUserPreferenceWalking;
- (BOOL)hasWeatherPrecipitationInfo;
- (BOOL)isColdWeather;
- (BOOL)hasWeatherInfo;
- (BOOL)hasUserTransportTypePreferenceInfo;
- (BOOL)isLowChanceOfSnowing;
- (BOOL)hasRidesharingInfo;
- (BOOL)hasWeatherTemperatureInfo;
- (BOOL)hasDistanceFromOriginToDestinationInfo;
- (BOOL)isUserPreferenceRidesharing;
- (BOOL)hasMapTypeInfo;
- (BOOL)hasDistanceFromHereToOriginInfo;
- (BOOL)isUserPreferenceDriving;
- (BOOL)hasTransitInfo;
- (BOOL)isBadWeather;
- (BOOL)isCarPlayConnected;

@end
