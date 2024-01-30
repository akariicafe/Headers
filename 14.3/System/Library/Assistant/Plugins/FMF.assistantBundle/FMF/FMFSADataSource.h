@class NSDictionary, FMServerInteractionController;

@interface FMFSADataSource : NSObject {
    NSDictionary *_mockLocations;
}

@property (retain, nonatomic) FMServerInteractionController *serverInteractionController;

+ (id)dataSource;

- (id)init;
- (void).cxx_destruct;
- (void)search:(id)a0 withCompletion:(id /* block */)a1;
- (void)setVisibility:(id)a0 withCompletion:(id /* block */)a1;
- (void)_punchOutToHandle:(id)a0;
- (void)loadMockLocationData;
- (void)dataLoaded:(id)a0;
- (void)setGeoFence:(id)a0 withCompletion:(id /* block */)a1;
- (void)punchOutFriend:(id)a0 withCompletion:(id /* block */)a1;

@end
