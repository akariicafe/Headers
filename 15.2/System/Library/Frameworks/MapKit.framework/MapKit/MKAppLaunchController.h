@class NSURL, NSString;

@interface MKAppLaunchController : NSObject {
    NSString *_webURLString;
}

@property (retain, nonatomic) NSURL *webURL;

+ (void)launchAttributionURLs:(id)a0 withAttribution:(id)a1 completionHandler:(id /* block */)a2;
+ (id)sharedController;

- (void)lookUpAppStoreURLForBundle:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
