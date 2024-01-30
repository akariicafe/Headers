@class BMMiningTaskConfig;

@interface BMEventExtractor : NSObject

@property BOOL shouldStop;
@property (retain) BMMiningTaskConfig *bmMiningTaskConfig;

- (id)init;
- (void).cxx_destruct;
- (void)terminateEarly;
- (id)initWithBMMiningTaskConfig:(id)a0;
- (id)extractEventsFilteredByTypes:(id)a0 taskSpecificEventProviders:(id)a1 error:(id *)a2;

@end
