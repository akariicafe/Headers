@class IKViewElement, _TVCommonSenseView;

@interface _TVCommonSenseTemplateController : UIViewController

@property (retain, nonatomic) _TVCommonSenseView *commonSenseView;
@property (retain, nonatomic) IKViewElement *templateElement;

- (void).cxx_destruct;
- (void)loadView;
- (void)_loadTemplate;
- (void)_updateHeaderWithElement:(id)a0;
- (id)_infoTableFromElement:(id)a0;
- (void)_updateFooterWithElement:(id)a0;
- (void)updateWithCommonSenseTemplate:(id)a0;

@end
