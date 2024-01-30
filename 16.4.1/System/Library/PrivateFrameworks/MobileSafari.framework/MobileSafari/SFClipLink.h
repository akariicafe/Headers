@class NSURL, NSString, UIImage;

@interface SFClipLink : NSObject

@property (class, readonly, nonatomic) double iconHeight;

@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *clipName;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *actionTitle;
@property (copy, nonatomic) NSString *actionCaption;
@property (retain, nonatomic) UIImage *icon;
@property (nonatomic) BOOL siteRequestsShowCard;

+ (id)localizedCaptionForClipNamed:(id)a0 action:(long long)a1;
+ (id)localizedUppercaseStringForAction:(long long)a0;

- (void).cxx_destruct;
- (void)getClipAttributesWithCompletionHandler:(id /* block */)a0;
- (id)initWithURL:(id)a0 bundleIdentifier:(id)a1 actionTitle:(id)a2;

@end
