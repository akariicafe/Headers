@class NSSet, NSString, NSMutableSet, NSObject, PLAssetJournalEntryPayload;
@protocol PLAlbumProtocol;

@interface PLFileSystemImportAsset : NSObject {
    NSString *_path;
    BOOL _pathContainsDCIM;
    NSMutableSet *_urls;
}

@property (retain, nonatomic) NSObject<PLAlbumProtocol> *destinationAlbum;
@property (nonatomic) int assetKind;
@property (readonly, nonatomic) NSSet *urls;
@property (readonly, nonatomic) PLAssetJournalEntryPayload *assetPayload;

- (long long)compare:(id)a0;
- (BOOL)isCameraKit;
- (void)addURL:(id)a0;
- (id)description;
- (void)addURLs:(id)a0;
- (id)initWithDestinationAlbum:(id)a0 assetKind:(int)a1;
- (id)initWithAssetPayload:(id)a0;
- (void).cxx_destruct;

@end
