@class NSString, NSDictionary, NSMutableDictionary, NSBundle, UIStoryboardSegueTemplate;

@interface UIStoryboard : NSObject

@property (readonly, nonatomic) NSString *storyboardFileName;
@property (readonly, nonatomic) NSDictionary *identifierToNibNameMap;
@property (readonly, nonatomic) NSDictionary *identifierToExternalStoryboardReferenceMap;
@property (readonly, nonatomic) NSString *designatedEntryPointIdentifier;
@property (readonly, nonatomic) NSString *designatedMenuIdentifier;
@property (readonly, nonatomic) NSMutableDictionary *identifierToUINibMap;
@property (nonatomic) UIStoryboardSegueTemplate *__currentStoryboardSegueTemplate;
@property (nonatomic) id /* block */ __currentStoryboardSegueCreator;
@property (nonatomic) id __currentSender;
@property (readonly, nonatomic) NSBundle *bundle;
@property (readonly) NSString *name;

+ (id)storyboardWithName:(id)a0 bundle:(id)a1;

- (void)dealloc;
- (id)__reallyInstantiateViewControllerWithIdentifier:(id)a0 creator:(id /* block */)a1 storyboardSegueTemplate:(id)a2 sender:(id)a3;
- (id)_instantiateInitialMenu;
- (id)_instantiateInitialViewControllerWithCreator:(id /* block */)a0 storyboardSegueTemplate:(id)a1 sender:(id)a2;
- (id)_instantiateViewControllerReferencedByPlaceholderWithIdentifier:(id)a0 storyboardSegueTemplate:(id)a1 sender:(id)a2;
- (id)_instantiateViewControllerWithIdentifier:(id)a0 creator:(id /* block */)a1 storyboardSegueTemplate:(id)a2 sender:(id)a3;
- (BOOL)containsNibNamed:(id)a0;
- (id)identifierForStringsFile;
- (id)initWithBundle:(id)a0 storyboardFileName:(id)a1 identifierToNibNameMap:(id)a2 identifierToExternalStoryboardReferenceMap:(id)a3 designatedEntryPointIdentifier:(id)a4 designatedMenuIdentifier:(id)a5;
- (id)instantiateInitialViewController;
- (id)instantiateInitialViewControllerWithCreator:(id /* block */)a0;
- (id)instantiateViewControllerWithIdentifier:(id)a0;
- (id)instantiateViewControllerWithIdentifier:(id)a0 creator:(id /* block */)a1;
- (id)nibForStoryboardNibNamed:(id)a0;
- (id)nibForViewControllerWithIdentifier:(id)a0;
- (id)referencedStoryboardForExternalReferenceInfo:(id)a0;

@end
