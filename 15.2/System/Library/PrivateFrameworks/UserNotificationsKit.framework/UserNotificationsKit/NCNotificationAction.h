@class NSString, NSURL, NSDictionary;
@protocol NCNotificationActionRunner;

@interface NCNotificationAction : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *iconImageName;
@property (readonly, copy, nonatomic) NSString *iconImageBundlePath;
@property (readonly, nonatomic) unsigned long long activationMode;
@property (readonly, copy, nonatomic) NSURL *launchURL;
@property (readonly, copy, nonatomic) NSString *launchBundleID;
@property (readonly, nonatomic) unsigned long long behavior;
@property (readonly, copy, nonatomic) NSDictionary *behaviorParameters;
@property (readonly, nonatomic) id<NCNotificationActionRunner> actionRunner;
@property (readonly, nonatomic, getter=isSystemAction) BOOL systemAction;
@property (readonly, nonatomic) BOOL requiresAuthentication;
@property (readonly, nonatomic, getter=isDestructiveAction) BOOL destructiveAction;
@property (readonly, nonatomic) BOOL shouldDismissNotification;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithNotificationAction:(id)a0;

@end
