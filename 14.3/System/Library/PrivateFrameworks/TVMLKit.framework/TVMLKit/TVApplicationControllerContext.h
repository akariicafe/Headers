@class NSURL, NSString, NSDictionary;

@interface TVApplicationControllerContext : NSObject <NSCopying>

@property (nonatomic, getter=isSupplementary) BOOL supplementary;
@property (copy, nonatomic) NSURL *appLocalJSURL;
@property (copy, nonatomic) NSURL *appJSCachePath;
@property (copy, nonatomic) NSString *bagBootURLKey;
@property (copy, nonatomic) NSURL *offlineJSURL;
@property (copy, nonatomic) NSURL *javaScriptApplicationURL;
@property (copy, nonatomic) NSString *storageIdentifier;
@property (nonatomic) BOOL supportsPictureInPicturePlayback;
@property (copy, nonatomic) NSDictionary *launchOptions;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
