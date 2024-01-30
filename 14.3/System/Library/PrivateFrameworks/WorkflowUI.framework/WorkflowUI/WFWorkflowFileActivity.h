@class NSArray, UIView, WFFileRepresentation, UIBarButtonItem;

@interface WFWorkflowFileActivity : UIActivity

@property (copy, nonatomic) NSArray *activityItems;
@property (readonly, nonatomic) WFFileRepresentation *workflowFile;
@property (retain, nonatomic) UIView *sourceView;
@property (retain, nonatomic) UIBarButtonItem *barButtonItem;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceRect;
@property (nonatomic) unsigned long long arrowDirection;

+ (id)activityType;

- (id)activityType;
- (void).cxx_destruct;
- (id)activityViewController;
- (void)prepareWithActivityItems:(id)a0;
- (id)activityTitle;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)_systemImageName;
- (id)initWithSourceView:(id)a0 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 barButtonItem:(id)a2;

@end
