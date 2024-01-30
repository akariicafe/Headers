@class NSMutableArray;

@interface CPAnalyticsDestinationsRegistry : NSObject

@property (readonly, nonatomic) NSMutableArray *destinations;

- (void)removePhotoLibraryFromDestinations;
- (void)addDestination:(id)a0;
- (void)removeDestination:(id)a0;
- (void)updateWithConfigurationAtURL:(id)a0 cpAnalyticsInstance:(id)a1;
- (void)sendToAllDestinations:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)_destinationClassMap;
- (void)_parseDestinationsFromConfig:(id)a0 cpAnalyticsInstance:(id)a1;
- (id)_readConfiguration:(id)a0;
- (void)setupWithConfigurationAtURL:(id)a0 cpAnalyticsInstance:(id)a1;

@end
