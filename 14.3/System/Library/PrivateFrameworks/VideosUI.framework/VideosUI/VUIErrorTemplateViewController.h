@class VUIErrorView, IKViewElement;

@interface VUIErrorTemplateViewController : UIViewController

@property (retain, nonatomic) IKViewElement *viewElement;
@property (readonly, nonatomic) VUIErrorView *errorView;

- (void).cxx_destruct;
- (void)loadView;
- (void)updateWithTemplateElement:(id)a0;
- (void)updateWithViewElement:(id)a0;

@end
