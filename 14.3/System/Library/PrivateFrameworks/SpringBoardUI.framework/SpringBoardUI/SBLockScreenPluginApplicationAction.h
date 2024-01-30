@class NSString, NSURL;

@interface SBLockScreenPluginApplicationAction : SBLockScreenPluginAction

@property (copy, nonatomic) NSString *bundleID;
@property (retain, nonatomic, setter=setURL:) NSURL *url;
@property (nonatomic) unsigned long long transitionStyle;

+ (id)actionWithURL:(id)a0;
+ (id)actionWithBundleID:(id)a0;

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)description;
- (id)succinctDescriptionBuilder;
- (BOOL)isApplicationAction;

@end
