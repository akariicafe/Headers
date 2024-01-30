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

- (id)shortcutItem;
- (id)handoffUserActivityType;
- (id)userActivities;
- (id)sourceApplication;
- (id)URLContexts;
- (id)notificationResponse;
- (id)cloudKitShareMetadata;
- (id)_initWithConnectionOptionsContext:(id)a0 fbsScene:(id)a1 specification:(id)a2;
- (id)description;
- (void).cxx_destruct;

@end
