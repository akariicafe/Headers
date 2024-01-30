@class NSString, LPiTunesMediaAsset;

@interface LPiTunesMediaTVEpisodeUnresolvedMetadata : NSObject <LPiTunesMediaUnresolvedMetadata>

@property (copy, nonatomic) NSString *storeFrontIdentifier;
@property (copy, nonatomic) NSString *storeIdentifier;
@property (copy, nonatomic) NSString *episodeName;
@property (copy, nonatomic) NSString *seasonName;
@property (copy, nonatomic) NSString *genre;
@property (retain, nonatomic) LPiTunesMediaAsset *artwork;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)resolve;
- (id)assetsToFetch;

@end
