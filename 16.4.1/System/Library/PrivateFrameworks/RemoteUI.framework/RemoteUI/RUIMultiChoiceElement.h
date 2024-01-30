@class RUIObjectModel, NSString, RUIMultiChoiceView;

@interface RUIMultiChoiceElement : RUIElement <RUIMultiChoiceActionHandler>

@property (retain, nonatomic) RUIMultiChoiceView *view;
@property (weak, nonatomic) RUIObjectModel *objectModel;
@property (readonly, nonatomic) BOOL floatsAboveKeyboard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sourceURL;
- (id)viewControllerForPresentation;
- (void).cxx_destruct;
- (id)viewForElementIdentifier:(id)a0;
- (id)initWithAttributes:(id)a0 parent:(id)a1;
- (void)stopActivityIndicatorForChoice:(id)a0;
- (void)addChoice:(id)a0;
- (void)didTapChoice:(id)a0;
- (void)didTapFooter:(id)a0;
- (void)didUpdateTitleForChoice:(id)a0;
- (double)estimatedViewHeight;
- (void)pageDidChange;
- (void)setChoice:(id)a0 enabled:(BOOL)a1;
- (void)startActivityIndicatorForChoice:(id)a0;
- (id)subElementWithID:(id)a0;

@end
