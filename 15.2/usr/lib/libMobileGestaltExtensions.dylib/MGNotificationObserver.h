@class CADisplay, NSString, NSMutableSet, MGFileWatcher, MCProfileConnection, NSMutableArray;

@interface MGNotificationObserver : NSObject <NSCopying, MCProfileConnectionObserver> {
    NSMutableSet *_blocks;
    int _type;
    NSString *_argument;
    union { NSMutableArray *_darwinTokens; struct __SCPreferences *_scPrefs; MGFileWatcher *_fileWatcher; MCProfileConnection *_mcConnection; CADisplay *_mainDisplay; void *_swBehaviorHandle; struct __CTServerConnection *_ctCenter; struct __SCDynamicStore *_scdynaStore; } _registration;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)a0 userInfo:(id)a1;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)a0 userInfo:(id)a1;
- (void)_removeBlock:(id /* block */)a0;
- (void)_cancelRegistration;
- (void)_addBlock:(id /* block */)a0;
- (id)initWithType:(int)a0 argument:(id)a1;
- (void)invokeBlocks;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)startDynaStoreMonitoringWithArgument:(id)a0;

@end
