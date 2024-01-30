@class INIntent, NSString, NSUserActivity, NSURL;

@interface SGSuggestedEventLaunchInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *userActivityString;
@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSUserActivity *userActivity;
@property (readonly, nonatomic) INIntent *intent;
@property (readonly, nonatomic) NSURL *sourceURL;
@property (readonly, nonatomic) NSString *localizedShowInString;

- (id)initWithBundleId:(id)a0 localizedShowInString:(id)a1 userActivity:(id)a2 intent:(id)a3 sourceURL:(id)a4;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
