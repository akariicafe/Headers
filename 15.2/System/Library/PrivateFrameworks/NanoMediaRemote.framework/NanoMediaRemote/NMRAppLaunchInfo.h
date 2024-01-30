@class NSString, NSURL;

@interface NMRAppLaunchInfo : NSObject

@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSURL *URL;

- (void).cxx_destruct;
- (id)initWithBundleID:(id)a0 URL:(id)a1;

@end
