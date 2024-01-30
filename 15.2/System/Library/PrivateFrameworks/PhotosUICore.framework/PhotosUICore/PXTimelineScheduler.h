@class PXTimelineDataSource, NSArray;

@interface PXTimelineScheduler : NSObject

@property (retain, nonatomic) PXTimelineDataSource *timelineDataSource;
@property (retain, nonatomic) NSArray *memoryTimelineEntries;
@property (retain, nonatomic) NSArray *featuredPhotoTimelineEntries;
@property (retain, nonatomic) NSArray *bestContent;
@property (retain, nonatomic) NSArray *timelineCandidates;
@property (nonatomic) double duration;

- (id)_timelineEntryByBestContentIntervalAtDate:(id)a0 numberOfDays:(long long)a1 options:(id)a2;
- (void)_initTimelineEntriesAtDate:(id)a0 options:(id)a1;
- (id)_findBestContentAndRemoveFromSourceAtDate:(id)a0 options:(id)a1;
- (id)_findBestFeaturedPhotoAndRemoveFromSource;
- (id)_scheduledTimelineEntriesWithOptions:(id)a0 atDate:(id)a1;
- (id)initWithTimelineDataSource:(id)a0;
- (id)_timelineEntriesFromAssetCollections:(id)a0;
- (id)_coalesceRepeatedTimelineEntries:(id)a0;
- (void).cxx_destruct;
- (id)_sortedTimelineEntriesForMemoriesAtDate:(id)a0;
- (id)init;
- (id)_timelineAtDate:(id)a0 startOfDayCandidatesIndex:(long long)a1 timelineEntryByBestContentInterval:(id)a2 options:(id)a3;
- (id)scheduledTimelineEntriesWithOptions:(id)a0;
- (long long)_startOfDayIndexWithOffsetDay:(long long)a0 entriesCount:(long long)a1 perDayLimit:(long long)a2 options:(id)a3;

@end
