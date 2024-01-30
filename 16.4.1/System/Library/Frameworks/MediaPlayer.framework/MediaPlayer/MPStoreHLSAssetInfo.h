@class NSString, NSURL, NSNumber, ICStoreHLSAssetInfo;

@interface MPStoreHLSAssetInfo : NSObject {
    ICStoreHLSAssetInfo *_internalInfo;
}

@property (readonly, copy, nonatomic) NSURL *playlistURL;
@property (readonly, copy, nonatomic) NSURL *keyCertificateURL;
@property (readonly, copy, nonatomic) NSURL *keyServerURL;
@property (readonly, copy, nonatomic) NSString *keyServerProtocolType;
@property (readonly, copy, nonatomic) NSNumber *keyServerAdamID;
@property (readonly, copy, nonatomic) NSURL *alternatePlaylistURL;
@property (readonly, copy, nonatomic) NSURL *alternateKeyCertificateURL;
@property (readonly, copy, nonatomic) NSURL *alternateKeyServerURL;
@property (readonly, nonatomic, getter=isiTunesStoreStream) BOOL iTunesStoreStream;

- (void).cxx_destruct;
- (id)initWithiTunesCloudStoreHLSAssetInfo:(id)a0;

@end
