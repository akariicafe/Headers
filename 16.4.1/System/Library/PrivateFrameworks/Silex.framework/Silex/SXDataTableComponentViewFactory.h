@protocol SXComponentController, SXAdIgnorableViewFactory, SXTextComponentLayoutHosting, SXImageViewFactory, SXComponentActionHandler;

@interface SXDataTableComponentViewFactory : SXComponentViewFactory

@property (readonly, nonatomic) id<SXImageViewFactory> imageViewFactory;
@property (readonly, nonatomic) id<SXComponentActionHandler> componentActionHandler;
@property (readonly, weak, nonatomic) id<SXTextComponentLayoutHosting> textComponentLayoutHosting;
@property (readonly, weak, nonatomic) id<SXComponentController> componentController;
@property (readonly, nonatomic) id<SXAdIgnorableViewFactory> adIgnorableViewFactory;

- (id)type;
- (int)role;
- (void).cxx_destruct;
- (id)componentViewForComponent:(id)a0;
- (id)initWithDOMObjectProvider:(id)a0 viewport:(id)a1 presentationDelegateProvider:(id)a2 componentStyleRendererFactory:(id)a3 imageViewFactory:(id)a4 componentActionHandler:(id)a5 textComponentLayoutHosting:(id)a6 componentController:(id)a7 adIgnorableViewFactory:(id)a8;

@end
