@class NSString, NSDictionary, NSURL;

@interface MPStreamingDownloadSession : NSObject <NSCopying>

@property (copy, nonatomic) NSString *assetFlavor;
@property (nonatomic) unsigned long long assetQuality;
@property (nonatomic) BOOL didStartLeaseSession;
@property (nonatomic) unsigned long long downloadToken;
@property (nonatomic) BOOL isHLSAsset;
@property (nonatomic, getter=isiTunesStoreStream) BOOL iTunesStoreStream;
@property (nonatomic) unsigned long long protectionType;
@property (copy, nonatomic) NSDictionary *purchaseBundle;
@property (retain, nonatomic) NSDictionary *responseAssetDictionary;
@property (copy, nonatomic) NSURL *streamingKeyServerURL;
@property (copy, nonatomic) NSURL *streamingKeyCertificateURL;
@property (copy, nonatomic) NSURL *sourceURL;
@property (copy, nonatomic) NSURL *alternateSourceURL;
@property (copy, nonatomic) NSURL *alternateHLSPlaylistURL;
@property (copy, nonatomic) NSURL *alternateHLSKeyServerURL;
@property (copy, nonatomic) NSURL *alternateHLSKeyCertificateURL;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;

@end
