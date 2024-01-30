@class SWNavigationPreview, NSMutableDictionary, NSString, NSMutableSet, NSMutableArray;

@interface SWNavigationManager : NSObject <SWNavigationManager>

@property (readonly, nonatomic) NSMutableArray *handlers;
@property (readonly, nonatomic) NSMutableDictionary *schemeHandlers;
@property (readonly, nonatomic) NSMutableDictionary *extensionHandlers;
@property (readonly, nonatomic) NSMutableSet *observers;
@property (retain, nonatomic) SWNavigationPreview *currentPreview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)registerHandler:(id)a0;
- (unsigned long long)actionForRequest:(id)a0;
- (void)commitViewController:(id)a0;
- (id)previewViewControllerForRequest:(id)a0;
- (void)registerHandler:(id)a0 extension:(id)a1;
- (void)registerHandler:(id)a0 scheme:(id)a1;
- (BOOL)shouldPreviewRequest:(id)a0;

@end
