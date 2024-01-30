@protocol PXPerson;

@interface PXPeopleMergeContentViewController : UIViewController

@property (retain, nonatomic) id<PXPerson> targetPerson;
@property (retain, nonatomic) id<PXPerson> draggedPerson;

- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithTargetPerson:(id)a0 draggedPerson:(id)a1;

@end
