@class NSArray, NSPredicate;

@interface MTLibraryQuery : NSObject

@property (retain, nonatomic) NSArray *podcastResults;
@property (retain, nonatomic) NSArray *episodeResults;
@property (retain, nonatomic) NSPredicate *podcastPredicate;
@property (retain, nonatomic) NSPredicate *episodePredicate;
@property (retain, nonatomic) NSArray *podcastSortDescriptors;
@property (retain, nonatomic) NSArray *episodeSortDescriptors;
@property (copy, nonatomic) id /* block */ action;
@property (nonatomic) long long fetchLimit;
@property (nonatomic, getter=isActive) BOOL active;

- (id)init;
- (void).cxx_destruct;
- (void)runQuery;
- (void)runQueryInContext:(id)a0;
- (void)runQueryWithPodcastPredicate:(id)a0 episodePredicate:(id)a1;

@end
