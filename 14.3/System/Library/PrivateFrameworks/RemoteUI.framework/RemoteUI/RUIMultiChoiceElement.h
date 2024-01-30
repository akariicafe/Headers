@class RUIObjectModel, NSString, RUIMultiChoiceView;

@interface RUIMultiChoiceElement : RUIElement <RUIMultiChoiceActionHandler>

@property (retain, nonatomic) RUIMultiChoiceView *view;
@property (weak, nonatomic) RUIObjectModel *objectModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)viewForElementIdentifier:(id)a0;
- (id)initWithAttributes:(id)a0 parent:(id)a1;
- (void)addChoice:(id)a0;
- (void)startActivityIndicatorForChoice:(id)a0;
- (void)stopActivityIndicatorForChoice:(id)a0;
- (void)didTapChoice:(id)a0;
- (double)estimatedViewHeight;

@end
