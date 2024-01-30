@class NSString, NSURL;

@interface PodcastsFoundation.DownloadableURLOptions : NSObject {
    void /* unknown type, empty encoding */ urlRawString;
}

@property (nonatomic, readonly) NSString *urlRawString;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic) void /* unknown type, empty encoding */ nonAppInitiated;

- (id)init;
- (void).cxx_destruct;
- (id)init:(id)a0 nonAppInitiated:(BOOL)a1;
- (id)initWithUrl:(id)a0 nonAppInitiated:(BOOL)a1;

@end
