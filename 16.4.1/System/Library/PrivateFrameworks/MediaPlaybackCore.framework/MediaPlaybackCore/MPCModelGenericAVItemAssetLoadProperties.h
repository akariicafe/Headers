@class MPCAudioAssetTypeSelection, NSString, MPModelHomeSharingAsset, MPModelGenericObject, MPIdentifierSet, MPModelStoreAsset, MPModelFileAsset;
@protocol MPCModelPlaybackAssetCacheProviding;

@interface MPCModelGenericAVItemAssetLoadProperties : NSObject

@property (nonatomic) long long HLSContentPolicy;
@property (readonly, nonatomic) BOOL allowsHLSContent;
@property (copy, nonatomic) NSString *assetSourceStorefrontID;
@property (nonatomic) BOOL prefersVideoContent;
@property (retain, nonatomic) id<MPCModelPlaybackAssetCacheProviding> assetCacheProvider;
@property (retain, nonatomic) MPModelFileAsset *fileAsset;
@property (retain, nonatomic) MPModelGenericObject *genericObject;
@property (retain, nonatomic) MPModelHomeSharingAsset *homeSharingAsset;
@property (retain, nonatomic) MPIdentifierSet *itemIdentifiers;
@property (nonatomic) BOOL prefersHighQualityContent;
@property (nonatomic, getter=isRadioPlayback) BOOL radioPlayback;
@property (retain, nonatomic) MPModelStoreAsset *storeAsset;
@property (nonatomic, getter=isFollowUp) BOOL followUp;
@property (nonatomic) unsigned long long accountID;
@property (nonatomic) unsigned long long delegatedAccountID;
@property (copy, nonatomic) NSString *householdID;
@property (copy, nonatomic) NSString *storefrontID;
@property (copy, nonatomic) NSString *playbackAuthorizationToken;
@property (nonatomic) long long preferredAudioAssetType;
@property (retain, nonatomic) MPCAudioAssetTypeSelection *audioAssetTypeSelection;
@property (nonatomic) BOOL supportsVocalAttenuation;

- (void).cxx_destruct;

@end
