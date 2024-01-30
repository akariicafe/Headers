@class CSAdjunctListItem, NSString, FCActivityManager, NSObject, CSFocusActivityViewController;
@protocol FCActivityDescribing, CSFocusActivityDelegate, CSItemDestination, OS_dispatch_queue;

@interface CSFocusActivityManager : NSObject <FCActivityManagerObserving, CSFocusActivityViewControllerDelegate> {
    id<CSItemDestination> _itemDestination;
    id<FCActivityDescribing> _currentActivity;
    NSObject<OS_dispatch_queue> *_activityManagerQueue;
    FCActivityManager *_activityManager;
    CSFocusActivityViewController *_focusActivityViewController;
    CSAdjunctListItem *_focusActivityItem;
}

@property (weak, nonatomic) id<CSFocusActivityDelegate> delegate;
@property (readonly, nonatomic) BOOL isFocusActivityIndicatorVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)presentFocusActivityPickerViewControllerFromView:(id)a0 coverSheetViewPresenting:(id)a1;
- (void)focusActivityViewIndicatorDidChangeToVisible:(BOOL)a0;
- (void)_addOrUpdateFocusActivityIndicatorItemIfNecessary;
- (void)_updateFocusActivityIndicator;
- (void)activeActivityDidChangeForManager:(id)a0;
- (void)availableActivitiesDidChangeForManager:(id)a0;
- (id)_activityForDisplayInIndicator;
- (void)dealloc;
- (BOOL)_shouldHideFocusActivityIndicator;
- (id)initWithItemDestination:(id)a0;
- (void).cxx_destruct;

@end
