@interface PodcastsKit.CoreDataLibrary : NSObject <PKLibrary>

@property (nonatomic, retain) void /* unknown type, empty encoding */ subscriptionController;

- (id)init;
- (void).cxx_destruct;
- (void)fetchMatchesFor:(id)a0 limit:(long long)a1 resultsHandler:(id /* block */)a2;
- (void)fetchAllShowsWithResultsHandler:(id /* block */)a0;

@end
