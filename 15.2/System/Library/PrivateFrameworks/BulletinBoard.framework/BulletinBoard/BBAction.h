@class NSString, NSDictionary, NSURL, BBAppearance;

@interface BBAction : NSObject <NSCopying, NSSecureCoding> {
    BOOL _deliverResponse;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) id /* block */ internalBlock;
@property (readonly, nonatomic) BOOL hasLaunchAction;
@property (readonly, nonatomic) BOOL hasPluginAction;
@property (readonly, nonatomic) BOOL hasRemoteViewAction;
@property (readonly, nonatomic) BOOL hasInteractiveAction;
@property (nonatomic) long long actionType;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) BBAppearance *appearance;
@property (nonatomic, getter=isAuthenticationRequired) BOOL authenticationRequired;
@property (nonatomic) BOOL shouldDismissBulletin;
@property (copy, nonatomic) NSURL *launchURL;
@property (copy, nonatomic) NSString *launchBundleID;
@property (nonatomic) BOOL launchCanBypassPinLock;
@property (nonatomic) unsigned long long activationMode;
@property (copy, nonatomic) NSString *activatePluginName;
@property (copy, nonatomic) NSDictionary *activatePluginContext;
@property (copy, nonatomic) NSString *remoteViewControllerClassName;
@property (copy, nonatomic) NSString *remoteServiceBundleIdentifier;
@property (nonatomic) long long behavior;
@property (copy, nonatomic) NSDictionary *behaviorParameters;
@property (nonatomic) BOOL canBypassPinLock;

+ (id)actionWithLaunchURL:(id)a0;
+ (id)actionWithActivatePluginName:(id)a0 activationContext:(id)a1;
+ (id)actionWithCallblock:(id /* block */)a0;
+ (id)actionWithLaunchBundleID:(id)a0 callblock:(id /* block */)a1;
+ (id)actionWithLaunchURL:(id)a0 callblock:(id /* block */)a1;
+ (id)actionWithAppearance:(id)a0;
+ (id)actionWithIdentifier:(id)a0 title:(id)a1;
+ (id)action;
+ (id)actionWithIdentifier:(id)a0;
+ (id)actionWithLaunchBundleID:(id)a0;

- (id)awakeAfterUsingCoder:(id)a0;
- (id)partialDescription;
- (id)initWithIdentifier:(id)a0;
- (BOOL)deliverResponse:(id)a0;
- (id)url;
- (id)_nameForActionType:(long long)a0;
- (void)setCallblock:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)bundleID;
- (id)replacementObjectForCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
