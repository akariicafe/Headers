@class NSString, NSArray;
@protocol MTPodcastDetailDataSourceDelegate;

@interface MTPodcastDetailDataSource : NSObject <MTPodcastDetailEpisodeSectionDelegate>

@property (readonly, copy, nonatomic) NSString *podcastUuid;
@property (weak, nonatomic) id<MTPodcastDetailDataSourceDelegate> delegate;
@property (nonatomic) unsigned long long selectedTab;
@property (readonly, nonatomic) NSArray *sections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sortDescriptorsForPodcastUuid:(id)a0;
+ (id)predicateForPodcast:(id)a0 sectionType:(unsigned long long)a1;
+ (id)predicateForPlayingPodcast:(id)a0 sectionType:(unsigned long long)a1;

- (void)reloadData;
- (id)podcast;
- (void).cxx_destruct;
- (unsigned long long)indexForSection:(id)a0;
- (id)unplayedSections;
- (id)feedSections;
- (id)savedSections;
- (id)createSectionForLimitedUnplayed;
- (id)createSectionForOtherEpisodes;
- (id)createSectionForEmptyOverlay;
- (id)createSectionForPlayedToBeDeleted;
- (id)createSectionForFeed;
- (id)createSectionForSaved;
- (id)createSectionForIsFromiTunesSync;
- (void)sectionWillChangeContent:(id)a0;
- (void)sectionDidChangeContent:(id)a0;
- (void)episodeSection:(id)a0 didChangeObject:(id)a1 atIndex:(unsigned long long)a2 forChangeType:(unsigned long long)a3 newIndex:(unsigned long long)a4;
- (id)initWithPodcastUuid:(id)a0;
- (id)createSectionForDarkPlacard;

@end
