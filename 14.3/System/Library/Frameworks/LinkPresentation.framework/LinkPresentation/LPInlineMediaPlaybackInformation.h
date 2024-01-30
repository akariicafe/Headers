@class LPAudio, NSString, NSArray, NSURL;

@interface LPInlineMediaPlaybackInformation : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *storeIdentifier;
@property (copy, nonatomic) NSString *storefrontIdentifier;
@property (copy, nonatomic) NSArray *offers;
@property (readonly, nonatomic) BOOL isAvailableForAnonymousDownload;
@property (copy, nonatomic) NSURL *previewURL;
@property (copy, nonatomic) NSString *persistentIdentifier;
@property (retain, nonatomic) LPAudio *audio;

- (void).cxx_destruct;
- (unsigned long long)availability;
- (id)initWithType:(unsigned long long)a0;

@end
