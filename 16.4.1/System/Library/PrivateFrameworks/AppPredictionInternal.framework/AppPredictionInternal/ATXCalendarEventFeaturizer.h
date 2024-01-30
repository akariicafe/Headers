@class ATXFreeMomentDataSource, NSDate;

@interface ATXCalendarEventFeaturizer : NSObject {
    ATXFreeMomentDataSource *_freeMomentDataSource;
    NSDate *_currentTime;
}

- (void).cxx_destruct;
- (id)initWithFreeMomentDataSource:(id)a0;
- (id)initWithFreeMomentDataSource:(id)a0 currentTime:(id)a1;
- (void)updateFeatureVectorWithCalendarEvents:(id)a0;

@end
