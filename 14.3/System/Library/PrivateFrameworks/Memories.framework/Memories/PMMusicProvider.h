@class NSArray, NSDictionary, NSString, VEKSong, VEKProduction;
@protocol PMEditProviderDelegate;

@interface PMMusicProvider : NSObject <PMEditProviderProtocol>

@property (retain, nonatomic) NSArray *featuredSongs;
@property (retain, nonatomic) NSDictionary *songsByMoodGroupingType;
@property (retain, nonatomic) NSDictionary *songsByGenreGroupingType;
@property (retain, nonatomic) NSArray *moodSectionKeys;
@property (retain, nonatomic) NSArray *genreSectionKeys;
@property (retain, nonatomic) NSString *currentSelectedSectionKey;
@property (readonly, nonatomic) VEKSong *currentSong;
@property (nonatomic) unsigned long long groupingStyle;
@property (nonatomic) long long selectedSection;
@property (retain, nonatomic) VEKProduction *production;
@property (weak, nonatomic) id<PMEditProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSections;
- (void).cxx_destruct;
- (void)clearFeaturedSongs;
- (id)displayNameForSection:(long long)a0;
- (id)indexPathOfSong:(id)a0;
- (id)initWithProduction:(id)a0;
- (long long)numberOfItemsinSection:(long long)a0;
- (id)songAtIndex:(long long)a0 section:(long long)a1;
- (id)sortedMoodIDs;
- (id)songsGroupedByMood;
- (id)sortedGenreIDs;
- (id)displayNameForGenreID:(id)a0;
- (id)displayNameForMood:(long long)a0;
- (id)sectionKeyForIndex:(long long)a0;
- (BOOL)genreGroupContainsSongs;

@end
