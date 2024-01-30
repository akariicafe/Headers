@class NSArray, UIViewController, UIBarButtonItem;

@interface ICExportNotesActivity : UIActivity

@property (retain, nonatomic) NSArray *noteObjectIDs;
@property (retain, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) UIBarButtonItem *barButtonItem;

- (id)activityType;
- (void).cxx_destruct;
- (id)activityTitle;
- (id)activityImage;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)performActivity;
- (id)initWithNotes:(id)a0 forPresentingFromViewController:(id)a1 barButtonItem:(id)a2;

@end
