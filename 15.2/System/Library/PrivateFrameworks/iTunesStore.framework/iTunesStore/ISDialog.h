@class NSString, NSArray, SSAuthenticationContext, SSPaymentSheet, NSLock, NSMutableDictionary;

@interface ISDialog : NSObject <SSXPCCoding> {
    NSString *_displayCountKey;
    NSLock *_lock;
    long long _maxDisplayCount;
    NSMutableDictionary *_userInfo;
    struct __CFDictionary { } *_userNotificationValues;
}

@property (copy) NSString *touchIDContinueToken;
@property (retain) NSArray *buttons;
@property long long defaultButtonIndex;
@property BOOL oneButtonPerLine;
@property long long unlockActionButtonIndex;
@property BOOL groupsTextFields;
@property (retain) NSArray *textFields;
@property (retain) NSString *message;
@property (retain) NSString *title;
@property BOOL allowDuplicates;
@property BOOL authorizationIsForced;
@property BOOL dismissOnHomeButton;
@property BOOL dismissOnLock;
@property BOOL expectsResponse;
@property BOOL shouldDismissAfterUnlock;
@property BOOL shouldDisplayAsTopMost;
@property BOOL shouldPendInSetupIfNotAllowed;
@property BOOL displaysOnLockscreen;
@property BOOL noDefaultButton;
@property long long kind;
@property (copy) SSAuthenticationContext *authenticationContext;
@property (copy) NSString *displayCountKey;
@property long long maximumDisplayCount;
@property (readonly) SSPaymentSheet *paymentSheet;
@property (readonly, getter=isDisplayable) BOOL displayable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)displayCountForKey:(id)a0;
+ (struct __CFString { } *)buttonTitleKeyForCFUserNotificationButtonTag:(unsigned long long)a0;
+ (unsigned long long)buttonTagForCFUserNotificationButtonTitleKey:(struct __CFString { } *)a0;
+ (void)_initializeStaticButtonTitleKeyAndTagMapping;

- (id)initWithTitle:(id)a0 message:(id)a1;
- (id)initWithError:(id)a0;
- (id)initWithDialogDictionary:(id)a0;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)buyParams;
- (void)dealloc;
- (void)incrementDisplayCount;
- (id)orderedButtonTitleKeysForCFUserNotification;
- (id)copyUserNotification;
- (id)initWithAuthenticationChallege:(id)a0;
- (id)initWithDialogDictionary:(id)a0 authenticationContext:(id)a1;
- (void)setValue:(void *)a0 forCFUserNotificationKey:(struct __CFString { } *)a1;
- (long long)_kindForString:(id)a0;
- (id)initWithOfferDeviceError:(id)a0;
- (void *)copyValueForCFUserNotificationKey:(struct __CFString { } *)a0;
- (void)setButtonsWithTitles:(id)a0;
- (void)setValue:(id)a0 forUserInfoKey:(id)a1;
- (id)valueForUserInfoKey:(id)a0;

@end
