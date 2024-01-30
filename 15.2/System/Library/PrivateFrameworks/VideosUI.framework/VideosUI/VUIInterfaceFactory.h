@class NSObject;
@protocol VUIGroupActivitiesManagerDelegate, VUIDocumentCreator;

@interface VUIInterfaceFactory : NSObject {
    struct { BOOL respondsToViewControllerCreation; } _documentCreatorFlags;
}

@property (retain, nonatomic) NSObject<VUIDocumentCreator> *documentCreator;
@property (retain, nonatomic) NSObject<VUIGroupActivitiesManagerDelegate> *groupActivitiesManager;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)viewControllerWithDocumentDataSource:(id)a0 appContext:(id)a1;
- (id)viewControllerWithDocumentDataSource:(id)a0 appContext:(id)a1 documentOptions:(id)a2;
- (id)rootTabBarViewController;
- (id)rootSplitViewController;
- (id)accountSettingsViewController;

@end
