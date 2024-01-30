@class BMStreamDatastore;

@interface FSFBiomeFeatureStoreStream : NSObject <FSFFeatureStoreStream>

@property (retain, nonatomic) BMStreamDatastore *writeStore;
@property (retain, nonatomic) BMStreamDatastore *readStore;

- (void).cxx_destruct;
- (BOOL)insert:(id)a0 withInteractionId:(id)a1 atTime:(double)a2;
- (id)retrieveEvents:(id)a0 startDate:(id)a1 endDate:(id)a2;
- (id)retrieve:(id)a0;
- (id)initWithConfig:(id)a0 streamId:(id)a1;

@end
