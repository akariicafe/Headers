@class NSArray, NSMutableArray;

@interface CPAnalyticsDestinationsRegistry : NSObject {
    NSMutableArray *_destinations;
}

@property (readonly, nonatomic) NSArray *destinations;

- (void)_parseDestinationsFromConfig:(id)a0 cpAnalyticsInstance:(id)a1;
- (id)_destinationClassMap;
- (void)updateWithConfigurationAtURL:(id)a0 cpAnalyticsInstance:(id)a1;
- (void)sendToAllDestinations:(id)a0;
- (void)addDestination:(id)a0;
- (id)_readConfiguration:(id)a0;
- (void)removePhotoLibraryFromDestinations;
- (void)setupWithConfigurationAtURL:(id)a0 cpAnalyticsInstance:(id)a1;
- (void)removeDestination:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
