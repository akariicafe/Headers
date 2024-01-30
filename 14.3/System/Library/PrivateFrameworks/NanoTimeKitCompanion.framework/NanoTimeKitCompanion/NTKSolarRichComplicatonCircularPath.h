@interface NTKSolarRichComplicatonCircularPath : NSObject

+ (id)_cachedSolarPathForDiameter:(double)a0 horizonLineTop:(double)a1 horizonLineHeight:(double)a2 maxCurveHeight:(double)a3 solarTimeModel:(id)a4 sunriseWaypoint:(id)a5 sunsetWayPoint:(id)a6 cacheMissBlock:(id /* block */)a7;
+ (id)_cachedSolarPathKeyForDiameter:(double)a0 horizonLineTop:(double)a1 horizonLineHeight:(double)a2 maxCurveHeight:(double)a3 solarTimeModel:(id)a4 sunriseWaypoint:(id)a5 sunsetWayPoint:(id)a6;
+ (id)_solarPathCache;
+ (id)pathWithDiameter:(double)a0 horizonLineTop:(double)a1 horizonLineHeight:(double)a2 maxCurveHeight:(double)a3 solarTimeModel:(id)a4 sunriseWaypoint:(id)a5 sunsetWayPoint:(id)a6;

@end
