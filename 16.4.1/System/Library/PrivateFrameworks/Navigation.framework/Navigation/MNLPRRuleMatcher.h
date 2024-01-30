@class NSTimeZone, NSArray, _MNLPRPlate, NSDictionary, NSDate, GEOLPRVehicle, NSMutableDictionary;

@interface MNLPRRuleMatcher : NSObject {
    GEOLPRVehicle *_vehicle;
    NSArray *_ruleSets;
    unsigned long long _signpost;
    _MNLPRPlate *_lastPlate;
    NSDate *_lastDate;
    NSTimeZone *_lastTimeZone;
    NSDictionary *_usedRegions;
    NSMutableDictionary *_usedRegionETAs;
}

- (void).cxx_destruct;
- (id)debug_jsonDescriptionOfLastPlate;
- (id)generateMaskedPlateForWaypoints:(id)a0 date:(id)a1 timeZone:(id)a2 error:(id *)a3;
- (id)initForVehicle:(id)a0 withRules:(id)a1;

@end
