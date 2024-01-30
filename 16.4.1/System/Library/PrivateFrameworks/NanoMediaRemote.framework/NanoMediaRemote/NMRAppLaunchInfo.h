@class NSString, NSURL;

@interface NMRAppLaunchInfo : NSObject

@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSURL *URL;

- (void).cxx_destruct;
- (id)initWithPlayerResponse:(id)a0;

@end
