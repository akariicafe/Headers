@class AMSDialogRequest;

@interface AMSSystemAlertDialogTask : AMSTask

@property long long defaultButtonIndex;
@property BOOL dismissOnHomeButton;
@property BOOL dismissOnLock;
@property BOOL shouldDismissAfterUnlock;
@property BOOL shouldDisplayAsTopMost;
@property BOOL shouldPendInSetupIfNotAllowed;
@property BOOL displaysOnLockscreen;
@property long long unlockActionButtonIndex;
@property (readonly, nonatomic) AMSDialogRequest *request;

- (id)initWithRequest:(id)a0;
- (id)present;
- (void).cxx_destruct;
- (struct __CFDictionary { } *)_createNoteDictionaryWithKeys:(struct ButtonKey { struct __CFString *x0; int x1; } *)a0 buttonActions:(id)a1 outOptions:(unsigned long long *)a2;
- (id)_reorderButtonActions;
- (struct __CFUserNotification { } *)_showNotificationFromDictionary:(struct __CFDictionary { } *)a0 options:(unsigned long long)a1;
- (long long)_defaultButtonIndexForActions:(id)a0;
- (id)_handleResponseForNote:(struct __CFUserNotification { } *)a0 buttonActions:(id)a1 keys:(struct ButtonKey { struct __CFString *x0; int x1; } *)a2;
- (long long)_keyboardTypeFor:(long long)a0;

@end
