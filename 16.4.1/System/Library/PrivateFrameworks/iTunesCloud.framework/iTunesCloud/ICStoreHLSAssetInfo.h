@class NSString, NSSet, NSURL, NSDictionary, NSNumber;

@interface ICStoreHLSAssetInfo : NSObject <NSCopying> {
    NSDictionary *_itemResponseDictionary;
}

@property (copy, nonatomic) NSURL *playlistURL;
@property (copy, nonatomic) NSURL *keyCertificateURL;
@property (copy, nonatomic) NSURL *keyServerURL;
@property (copy, nonatomic) NSString *keyServerProtocolType;
@property (copy, nonatomic) NSNumber *keyServerAdamID;
@property (nonatomic, getter=isiTunesStoreStream) BOOL iTunesStoreStream;
@property (copy, nonatomic) NSSet *audioTraits;
@property (readonly, copy, nonatomic) NSURL *alternatePlaylistURL;
@property (readonly, copy, nonatomic) NSURL *alternateKeyCertificateURL;
@property (readonly, copy, nonatomic) NSURL *alternateKeyServerURL;

- (id)initWithItemResponseDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
