@class NSURL, ICStoreHLSAssetInfo;

@interface MPStoreHLSAssetInfo : NSObject {
    ICStoreHLSAssetInfo *_internalInfo;
}

@property (readonly, copy, nonatomic) NSURL *playlistURL;
@property (readonly, copy, nonatomic) NSURL *keyCertificateURL;
@property (readonly, copy, nonatomic) NSURL *keyServerURL;
@property (readonly, copy, nonatomic) NSURL *alternatePlaylistURL;
@property (readonly, copy, nonatomic) NSURL *alternateKeyCertificateURL;
@property (readonly, copy, nonatomic) NSURL *alternateKeyServerURL;
@property (readonly, nonatomic, getter=isiTunesStoreStream) BOOL iTunesStoreStream;
@property (readonly, copy, nonatomic) NSURL *enhancedAudioKeyCertificateURL;
@property (readonly, copy, nonatomic) NSURL *enhancedAudioKeyServerURL;

- (id)initWithiTunesCloudStoreHLSAssetInfo:(id)a0;
- (void).cxx_destruct;

@end
