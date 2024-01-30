@class NSURL, NSString, GEOPDAppClipParams;

@interface GEOPlaceExternalActionLinkAppClipParams : NSObject {
    GEOPDAppClipParams *_appClipParams;
}

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *bundleId;

- (void).cxx_destruct;
- (id)initWithAppClipParams:(id)a0;

@end
