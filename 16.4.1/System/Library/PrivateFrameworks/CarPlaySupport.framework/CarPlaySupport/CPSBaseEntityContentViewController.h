@class CPEntity, NSString, CPSEntityResourceProvider;

@interface CPSBaseEntityContentViewController : UIViewController <CPSEntityContentViewControllerDelegate>

@property (retain, nonatomic) CPSEntityResourceProvider *resourceProvider;
@property (readonly, nonatomic) CPEntity *entity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)didUpdateEntity:(id)a0;
- (id)initWithEntity:(id)a0 resourceProvider:(id)a1;
- (BOOL)shouldAppearInUnsafeArea;
- (void)updateWithEntity:(id)a0;
- (BOOL)viewController:(id)a0 didPressButton:(id)a1;

@end
