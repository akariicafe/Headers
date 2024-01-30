@class NSNumber, MPMediaQuery, NSString;

@interface MPStoreCompletionOfferingLookupItem : NSObject

@property (readonly, nonatomic) MPMediaQuery *albumItemsQuery;
@property (readonly, nonatomic) BOOL wantsArtwork;
@property (readonly, nonatomic) unsigned long long tokenID;
@property (readonly, copy, nonatomic) id /* block */ responseBlock;
@property (readonly, nonatomic) NSNumber *storeLookupID;
@property (readonly, nonatomic) NSString *storeLookupIDString;

+ (id)storeLookupIDForAlbumItemsQuery:(id)a0;

- (void).cxx_destruct;
- (id)initWithAlbumItemsQuery:(id)a0 tokenID:(long long)a1 wantsArtwork:(BOOL)a2 responseBlock:(id /* block */)a3;
- (id)newLookupRequest;
- (id)lookupRequestForStorePlaylistIdentifier:(id)a0;
- (id)lookupRequestForAlbumWithRepresentativeItem:(id)a0;
- (id)_specificationForArtworkSizesToRequest;

@end
