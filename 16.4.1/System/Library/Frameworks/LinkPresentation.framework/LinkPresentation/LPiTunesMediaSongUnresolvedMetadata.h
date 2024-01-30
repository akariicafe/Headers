@class NSString, LPiTunesMediaAsset, NSArray;

@interface LPiTunesMediaSongUnresolvedMetadata : NSObject <LPiTunesMediaUnresolvedMetadata>

@property (copy, nonatomic) NSString *storeFrontIdentifier;
@property (copy, nonatomic) NSString *storeIdentifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *artist;
@property (copy, nonatomic) NSString *album;
@property (copy, nonatomic) NSString *lyrics;
@property (retain, nonatomic) LPiTunesMediaAsset *artwork;
@property (retain, nonatomic) NSArray *offers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)resolve;
- (id)assetsToFetch;

@end
