@class NSURL;

@interface SKUIPlayableAsset : NSObject

@property (copy, nonatomic) NSURL *contentURL;
@property (nonatomic) double initialPlaybackTime;
@property (readonly, nonatomic, getter=isITunesStream) BOOL ITunesStream;
@property (readonly, retain, nonatomic) NSURL *keyCertificateURL;
@property (readonly, retain, nonatomic) NSURL *keyServerURL;
@property (nonatomic) double playbackDuration;
@property (nonatomic) BOOL shouldUseITunesStoreSecureKeyDelivery;
@property (nonatomic) long long storeItemIdentifier;

- (id)init;
- (void).cxx_destruct;
- (id)initWithContentURL:(id)a0;
- (id)initWithVideo:(id)a0;
- (id)initWithVideoViewElement:(id)a0 assetViewElement:(id)a1;

@end
