@class NSString, FCActivityManager, NSObject, CSFocusActivityViewController;
@protocol FCActivityDescribing, CSFocusActivityDelegate, CSItemDestination, OS_dispatch_queue;

@interface CSFocusActivityManager : NSObject <FCActivityManagerObserving, CSFocusActivityViewControllerDelegate> {
    id<CSItemDestination> _itemDestination;
    id<FCActivityDescribing> _currentActivity;
    NSObject<OS_dispatch_queue> *_activityManagerQueue;
    FCActivityManager *_activityManager;
    CSFocusActivityViewController *_focusActivityViewController;
}

@property (weak, nonatomic) id<CSFocusActivityDelegate> delegate;
@property (readonly, nonatomic) BOOL isFocusActivityIndicatorVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithItemDestination:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)focusActivityViewIndicatorDidChangeToVisible:(BOOL)a0;
- (void)_updateFocusActivityIndicator;
- (void)availableActivitiesDidChangeForManager:(id)a0;
- (void)activeActivityDidChangeForManager:(id)a0;

@end
