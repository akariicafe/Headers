@class NSString, SXViewport;
@protocol SXDOMObjectProviding, SXComponentStyleRendererFactory, SXPresentationDelegateProvider;

@interface SXComponentViewFactory : NSObject <SXComponentViewFactory>

@property (readonly, nonatomic) id<SXDOMObjectProviding> DOMObjectProvider;
@property (readonly, nonatomic) SXViewport *viewport;
@property (readonly, nonatomic) id<SXPresentationDelegateProvider> presentationDelegateProvider;
@property (readonly, nonatomic) id<SXComponentStyleRendererFactory> componentStyleRendererFactory;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) int role;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)componentViewForComponent:(id)a0;
- (id)initWithDOMObjectProvider:(id)a0 viewport:(id)a1 presentationDelegateProvider:(id)a2 componentStyleRendererFactory:(id)a3;

@end
