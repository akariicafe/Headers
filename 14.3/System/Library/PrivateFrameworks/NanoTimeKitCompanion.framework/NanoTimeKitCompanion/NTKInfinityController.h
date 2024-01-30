@class NTKInfinityDataSource, NTKInfinityListing, NSMutableOrderedSet, NSArray;

@interface NTKInfinityController : NSObject {
    BOOL _shouldForceActionForTap;
    NTKInfinityDataSource *_dataSource;
    unsigned long long _currentCharacter;
    NSMutableOrderedSet *_recentlyPlayedActions;
    NSMutableOrderedSet *_recentlyPlayedMagicMoments;
    long long _currentReviewListingIndex;
    unsigned long long _reviewDirection;
    NSArray *_reviewModeListings;
}

@property (nonatomic) unsigned long long currentStyle;
@property (retain, nonatomic) NTKInfinityListing *currentListing;
@property (retain, nonatomic) NTKInfinityListing *preparedListing;
@property (nonatomic) unsigned long long controllerMode;

- (void).cxx_destruct;
- (void)setStyle:(unsigned long long)a0;
- (id)initForDevice:(id)a0;
- (id)_nextToyboxListing;
- (id)_nextReviewListing;
- (id)_listingsOfTypes:(id)a0;
- (id)nextListing;
- (id)_recentlyPlayedListings;
- (void)invalidateCurrentListing;
- (unsigned long long)_maxRecentlyPlayedMagicMoments;
- (unsigned long long)_maxRecentlyPlayedActions;
- (unsigned long long)characterFromStyle:(unsigned long long)a0;
- (unsigned long long)_modeFromStyle:(unsigned long long)a0;
- (id)posterImageForStyle:(unsigned long long)a0;
- (id)currentStyleComplicationColor;
- (id)complicationColorForStyle:(unsigned long long)a0;
- (void)prepareListing;
- (id)nextQueueListing;
- (void)prepareUserTapAction;
- (void)invalidatePreparedListing;
- (void)startedPlayingListing:(id)a0;
- (id)currentPosterImage;
- (id)currentComplicationColor;
- (void)setSequentialDirection:(unsigned long long)a0;
- (unsigned long long)totalReviewListings;
- (long long)currentReviewIndex;

@end
