@protocol SXLayoutInvalidator;

@interface SXDebugComponentViewFactory : SXComponentViewFactory

@property (readonly, nonatomic) id<SXLayoutInvalidator> invalidator;

- (id)type;
- (int)role;
- (void).cxx_destruct;
- (id)componentViewForComponent:(id)a0;
- (id)initWithDOMObjectProvider:(id)a0 viewport:(id)a1 presentationDelegateProvider:(id)a2 componentStyleRendererFactory:(id)a3 invalidator:(id)a4;

@end
