@class GEOAlmanacRiseTransitSet, NSDate;

@interface GEOAlmanac : NSObject {
    GEOAlmanacRiseTransitSet *_previousRiseTransitSet;
    GEOAlmanacRiseTransitSet *_currentRiseTransitSet;
    GEOAlmanacRiseTransitSet *_nextRiseTransitSet;
    struct set<CAARiseTransitSetDetails2, _CAARiseTransitSetDetails2IsLessThan, std::__1::allocator<CAARiseTransitSetDetails2> > { struct __tree<CAARiseTransitSetDetails2, _CAARiseTransitSetDetails2IsLessThan, std::__1::allocator<CAARiseTransitSetDetails2> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *__begin_node_; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<CAARiseTransitSetDetails2, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, _CAARiseTransitSetDetails2IsLessThan> { unsigned long long __value_; } __pair3_; } __tree_; } _riseTransitSetEvents;
}

@property (readonly, nonatomic) BOOL isDayLight;
@property (readonly, nonatomic) NSDate *previousSunrise;
@property (readonly, nonatomic) NSDate *previousTransit;
@property (readonly, nonatomic) NSDate *previousSunset;
@property (readonly, nonatomic) NSDate *sunrise;
@property (readonly, nonatomic) NSDate *transit;
@property (readonly, nonatomic) NSDate *sunset;
@property (readonly, nonatomic) NSDate *nextSunrise;
@property (readonly, nonatomic) NSDate *nextTransit;
@property (readonly, nonatomic) NSDate *nextSunset;

- (BOOL)isDayLightForTime:(double)a0;
- (void).cxx_destruct;
- (void)calculateAstronomicalTimeForLocation:(struct { double x0; double x1; })a0;
- (void)calculateAstronomicalTimeForLocation:(struct { double x0; double x1; })a0 time:(double)a1;
- (void)calculateAstronomicalTimeForLocation:(struct { double x0; double x1; })a0 altitudeInDegrees:(double)a1;
- (void)calculateAstronomicalTimeForLocation:(struct { double x0; double x1; })a0 time:(double)a1 altitudeInDegrees:(double)a2 options:(unsigned long long)a3;
- (BOOL)isDayLightForDate:(id)a0;
- (void)calculateGeocentricDirectionForSunX:(double *)a0 Y:(double *)a1 Z:(double *)a2 date:(id)a3;
- (id)description;
- (id).cxx_construct;
- (void)calculateAstronomicalTimeForLocation:(struct { double x0; double x1; })a0 date:(id)a1 altitudeInDegrees:(double)a2 options:(unsigned long long)a3;
- (void)calculateAstronomicalTimeForLocation:(struct { double x0; double x1; })a0 time:(double)a1 altitudeInDegrees:(double)a2;
- (void)calculateGeocentricDirectionForSunX:(double *)a0 Y:(double *)a1 Z:(double *)a2;

@end
