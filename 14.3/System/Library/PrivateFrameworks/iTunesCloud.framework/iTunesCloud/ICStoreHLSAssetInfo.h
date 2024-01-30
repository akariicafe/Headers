@class NSURL, NSDictionary;

@interface ICStoreHLSAssetInfo : NSObject <NSCopying> {
    NSDictionary *_itemResponseDictionary;
}

@property (copy, nonatomic) NSURL *playlistURL;
@property (copy, nonatomic) NSURL *keyCertificateURL;
@property (copy, nonatomic) NSURL *keyServerURL;
@property (nonatomic, getter=isiTunesStoreStream) BOOL iTunesStoreStream;
@property (readonly, copy, nonatomic) NSURL *alternatePlaylistURL;
@property (readonly, copy, nonatomic) NSURL *alternateKeyCertificateURL;
@property (readonly, copy, nonatomic) NSURL *alternateKeyServerURL;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithItemResponseDictionary:(id)a0;

@end
