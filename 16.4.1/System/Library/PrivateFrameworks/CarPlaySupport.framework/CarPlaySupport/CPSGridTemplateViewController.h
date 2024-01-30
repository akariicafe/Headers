@class NSString, CPSGridTemplateCollectionView, CPGridTemplate;

@interface CPSGridTemplateViewController : CPSBaseTemplateViewController <CPSButtonDelegate, CPGridTemplateProviding>

@property (readonly, nonatomic) CPGridTemplate *gridTemplate;
@property (weak, nonatomic) CPSGridTemplateCollectionView *gridView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)didSelectButton:(id)a0;
- (void)reloadTemplate:(id)a0;
- (void)setControl:(id)a0 enabled:(BOOL)a1;
- (id)_buttonForIdentifier:(id)a0;
- (id)_prepareCPSGridButtonsForButtons:(id)a0;
- (void)_viewDidLoad;
- (BOOL)_wantsNowPlayingButton;
- (id)initWithGridTemplate:(id)a0 interfaceDelegate:(id)a1 templateEnvironment:(id)a2;

@end
