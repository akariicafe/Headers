@class NSString, NSURL;

@interface GEOAppStoreAppClip : NSObject

@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSURL *appClipURL;
@property (retain, nonatomic) NSURL *artworkURL;

- (void).cxx_destruct;
- (id)description;
- (id)initWithBundleID:(id)a0 title:(id)a1 subtitle:(id)a2 appClipURL:(id)a3 artworkURL:(id)a4;

@end
