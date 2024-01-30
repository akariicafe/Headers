@class NSString, NSURL;

@interface RPStoreInfo : NSObject

@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *appName;
@property (retain, nonatomic) NSString *author;
@property (retain, nonatomic) NSURL *itemURL;
@property (retain, nonatomic) NSURL *appArtworkURL;

- (void).cxx_destruct;
- (id)dictionary;

@end
