@class CPEntity, NSString, CPSEntityResourceProvider;

@interface CPSBaseEntityContentViewController : UIViewController <CPSEntityContentViewControllerDelegate>

@property (retain, nonatomic) CPSEntityResourceProvider *resourceProvider;
@property (readonly, nonatomic) CPEntity *entity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithEntity:(id)a0 resourceProvider:(id)a1;
- (void)didUpdateEntity:(id)a0;
- (void)updateWithEntity:(id)a0;
- (BOOL)shouldAppearInUnsafeArea;
- (BOOL)viewController:(id)a0 didPressButton:(id)a1;

@end
