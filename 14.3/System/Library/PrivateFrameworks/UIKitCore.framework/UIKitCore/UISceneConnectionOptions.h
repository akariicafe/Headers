@class NSString, CKShareMetadata, NSSet, UNNotificationResponse, NSDictionary, FBSSceneSpecification, UIApplicationShortcutItem, FBSScene;

@interface UISceneConnectionOptions : NSObject

@property (readonly, nonatomic) NSDictionary *_launchOptionsDictionary;
@property (readonly, weak, nonatomic) FBSScene *_fbsScene;
@property (readonly, weak, nonatomic) FBSSceneSpecification *_specification;
@property (readonly, copy, nonatomic) NSSet *URLContexts;
@property (readonly, nonatomic) NSString *sourceApplication;
@property (readonly, nonatomic) NSString *handoffUserActivityType;
@property (readonly, copy, nonatomic) NSSet *userActivities;
@property (readonly, nonatomic) UNNotificationResponse *notificationResponse;
@property (readonly, nonatomic) UIApplicationShortcutItem *shortcutItem;
@property (readonly, nonatomic) CKShareMetadata *cloudKitShareMetadata;

- (id)sourceApplication;
- (id)handoffUserActivityType;
- (void).cxx_destruct;
- (id)URLContexts;
- (id)shortcutItem;
- (id)_initWithConnectionOptionsContext:(id)a0 fbsScene:(id)a1 specification:(id)a2;
- (id)userActivities;
- (id)description;
- (id)notificationResponse;
- (id)cloudKitShareMetadata;

@end
