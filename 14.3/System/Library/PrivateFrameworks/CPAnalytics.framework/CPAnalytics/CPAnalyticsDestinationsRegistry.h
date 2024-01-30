@class NSMutableArray;

@interface CPAnalyticsDestinationsRegistry : NSObject

@property (readonly, nonatomic) NSMutableArray *destinations;

- (id)init;
- (void)addDestination:(id)a0;
- (void).cxx_destruct;
- (void)_parseDestinationsFromConfig:(id)a0 cpAnalyticsInstance:(id)a1;
- (id)_readConfiguration:(id)a0;
- (void)setupWithConfigurationAtURL:(id)a0 cpAnalyticsInstance:(id)a1;
- (void)removeDestination:(id)a0;
- (void)removePhotoLibraryFromDestinations;
- (void)sendToAllDestinations:(id)a0;
- (void)updateWithConfigurationAtURL:(id)a0 cpAnalyticsInstance:(id)a1;

@end
