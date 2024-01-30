@class NSString;
@protocol SXActionManager, SXURLActionFactory;

@interface SXWebContentGenericNavigationHandler : NSObject <SWNavigationHandler>

@property (readonly, nonatomic) id<SXActionManager> actionManager;
@property (readonly, nonatomic) id<SXURLActionFactory> URLActionFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)handleRequest:(id)a0;
- (void).cxx_destruct;
- (id)actionForRequest:(id)a0;
- (id)previewViewControllerForRequest:(id)a0;
- (void)commitViewController:(id)a0 URLRequest:(id)a1;
- (id)initWithActionManager:(id)a0 URLActionFactory:(id)a1;

@end
