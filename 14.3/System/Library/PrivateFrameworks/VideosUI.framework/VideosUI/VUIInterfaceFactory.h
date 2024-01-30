@class NSObject;
@protocol VUIDocumentCreator;

@interface VUIInterfaceFactory : NSObject {
    struct { BOOL respondsToViewControllerCreation; } _documentCreatorFlags;
}

@property (retain, nonatomic) NSObject<VUIDocumentCreator> *documentCreator;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)viewControllerWithDocumentDataSource:(id)a0 appContext:(id)a1;
- (id)viewControllerWithDocumentDataSource:(id)a0 appContext:(id)a1 viewElement:(id)a2 documentOptions:(id)a3;
- (id)accountSettingsViewController;

@end
