@class CLSHolidayCalendarEventService;

@interface PGFeatureVectorUpcomingFutureGenerator : PGFeatureVectorGenerator

@property (retain, nonatomic) CLSHolidayCalendarEventService *holidayService;

- (void).cxx_destruct;
- (BOOL)probabilityPassWithThreshold:(double)a0;
- (void)enumerateFeatureVectorsByTypeUsingBlock:(id /* block */)a0;
- (BOOL)_enumerateHolidayFeatureVectorsFromLocalDate:(id)a0 toLocalDate:(id)a1 usingBlock:(id /* block */)a2;
- (BOOL)_enumeratePeopleEventFeatureVectorFromLocalDate:(id)a0 toLocalDate:(id)a1 usingBlock:(id /* block */)a2;
- (BOOL)_enumerateCalendarEventFeatureVectorFromLocalDate:(id)a0 toLocalDate:(id)a1 usingBlock:(id /* block */)a2;

@end
