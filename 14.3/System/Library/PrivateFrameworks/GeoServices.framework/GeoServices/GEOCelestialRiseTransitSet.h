@class NSDate;

@interface GEOCelestialRiseTransitSet : NSObject {
    NSDate *_rise;
    NSDate *_transit;
    NSDate *_set;
}

@property (readonly, nonatomic) double julianDay;
@property (readonly, nonatomic) struct CAARiseTransitSetDetails { BOOL bRiseValid; double Rise; BOOL bTransitValid; BOOL bTransitAboveHorizon; double Transit; BOOL bSetValid; double Set; } riseTransitSet;
@property (readonly, nonatomic) BOOL isTransitAboveHorizon;
@property (readonly, nonatomic) NSDate *rise;
@property (readonly, nonatomic) NSDate *transit;
@property (readonly, nonatomic) NSDate *set;

- (void).cxx_destruct;
- (id)description;
- (id).cxx_construct;
- (id)_dateFromOffset:(double)a0;
- (int)_numberOfEvents;
- (id)initWithJulianDay:(double)a0 riseTransitSet:(struct CAARiseTransitSetDetails { BOOL x0; double x1; BOOL x2; BOOL x3; double x4; BOOL x5; double x6; })a1;
- (double)_oldestEventInJulianDay;

@end
