@class NSString, NSData, MPCPlaybackIntent;

@interface MusicKit_SoftLinking_MPCPlaybackIntent : NSObject {
    MPCPlaybackIntent *_underlyingPlaybackIntent;
}

@property (copy, nonatomic, setter=setPlayActivityFeatureName:) NSString *playActivityFeatureName;
@property (copy, nonatomic, setter=setPlayActivityRecommendationData:) NSData *playActivityRecommendationData;
@property (nonatomic, setter=setRepeatMode:) long long repeatMode;
@property (nonatomic, setter=setShuffleMode:) long long shuffleMode;
@property (readonly, nonatomic) id rawPlaybackIntent;

- (void).cxx_destruct;
- (id)_underlyingPlaybackIntent;
- (id)initWithLegacyLibraryRequest:(id)a0 startLegacyModelObject:(id)a1 onlyLibraryContent:(BOOL)a2;
- (id)initWithLegacyModelStationSeeding:(id)a0;
- (id)initWithStoreIDs:(id)a0 startLegacyModelObject:(id)a1;

@end
