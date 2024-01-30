@class NSString, LPiTunesMediaAsset, NSArray;

@interface LPiTunesMediaMovieUnresolvedMetadata : NSObject <LPiTunesMediaUnresolvedMetadata>

@property (copy, nonatomic) NSString *storeFrontIdentifier;
@property (copy, nonatomic) NSString *storeIdentifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *genre;
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
