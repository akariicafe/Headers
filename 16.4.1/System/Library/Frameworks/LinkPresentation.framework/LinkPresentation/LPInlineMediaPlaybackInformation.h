@class LPAudio, NSString, NSArray, NSURL, LPLyricExcerptMetadata;

@interface LPInlineMediaPlaybackInformation : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *storeIdentifier;
@property (copy, nonatomic) NSString *storefrontIdentifier;
@property (copy, nonatomic) NSArray *offers;
@property (readonly, nonatomic) BOOL isAvailableForAnonymousDownload;
@property (copy, nonatomic) NSURL *previewURL;
@property (retain, nonatomic) LPLyricExcerptMetadata *lyricExcerpt;
@property (copy, nonatomic) NSString *persistentIdentifier;
@property (retain, nonatomic) LPAudio *audio;

- (unsigned long long)availability;
- (id)initWithType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
