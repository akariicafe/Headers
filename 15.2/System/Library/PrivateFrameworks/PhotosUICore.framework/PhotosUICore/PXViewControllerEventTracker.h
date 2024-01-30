@class NSString, NSMutableDictionary, NSObject;
@protocol PXAnonymousViewController;

@interface PXViewControllerEventTracker : PXUserInterfaceElementEventTracker <PXViewControllerEventTracker, PXChangeObserver>

@property (weak, nonatomic) NSObject<PXAnonymousViewController> *currentViewController;
@property (nonatomic) long long viewSignpost;
@property (readonly, nonatomic) NSString *viewName;
@property (readonly, nonatomic) BOOL isViewVisible;
@property (copy, nonatomic) NSMutableDictionary *payload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didPerformChanges;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (id)initWithViewName:(id)a0;
- (void)logViewControllerDidDisappear:(id)a0;
- (void)logViewControllerDidAppear:(id)a0;
- (void)setIsViewVisible:(BOOL)a0;
- (void)_invalidateIsViewVisible;
- (void)_updateIsViewVisible;

@end
