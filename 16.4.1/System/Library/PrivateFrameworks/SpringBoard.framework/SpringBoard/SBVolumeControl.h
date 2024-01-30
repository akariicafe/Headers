@class NSString, SBElasticHUDSettings, SBHUDController, SBConferenceManager, SBRingerControl, NSMutableSet, NSObject, SBAVSystemControllerCache, SBTelephonyManager;
@protocol OS_dispatch_queue;

@interface SBVolumeControl : NSObject <SBElasticHUDViewControllerDelegate, SBElasticVolumeDataSource, PTSettingsKeyObserver> {
    SBHUDController *_hudController;
    SBElasticHUDSettings *_volumeHUDSettings;
    SBRingerControl *_ringerControl;
    SBTelephonyManager *_telephonyManager;
    SBConferenceManager *_conferenceManager;
    BOOL _debounce;
    unsigned long long _mode;
    NSMutableSet *_alwaysHiddenCategories;
    NSString *_lastEventCategory;
    BOOL _volumeDownButtonIsDown;
    BOOL _volumeUpButtonIsDown;
    BOOL _controlCenterIsPresented;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _effectiveVolumeLock;
    float _effectiveVolume;
    NSObject<OS_dispatch_queue> *_avSystemControllerQueue;
    SBAVSystemControllerCache *_avCache;
}

@property (readonly, nonatomic) NSString *lastDisplayedCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isVolumeChangeAllowedForState:(id)a0 error:(out id *)a1;
+ (BOOL)_isVolumeManagedForCategory:(id)a0;

- (float)volumeStepUp;
- (float)_getMediaVolumeForIAP;
- (void)_resetMediaServerConnection;
- (void)_effectiveVolumeChanged:(id)a0;
- (void)increaseVolume;
- (float)_effectiveVolume;
- (BOOL)_isVolumeHUDVisible;
- (float)volumeStepDown;
- (void)_serverConnectionDied:(id)a0;
- (float)_buttonRepeatDelay;
- (void)addAlwaysHiddenCategory:(id)a0;
- (BOOL)elasticValueViewController:(id)a0 updateCurrentValue:(float)a1;
- (void)_dispatchAVSystemControllerSync:(id /* block */)a0;
- (void)setActiveCategoryVolume:(float)a0;
- (void)_dispatchAVSystemControllerAsync:(id /* block */)a0;
- (void)elasticHUDViewControllerRequestsDismissal:(id)a0;
- (id)elasticVolumeViewControllerActiveAudioCategory:(id)a0;
- (void)decreaseVolume;
- (void)hideVolumeHUDIfVisible;
- (void)cancelVolumeEvent;
- (void)_setMediaVolumeForIAP:(float)a0;
- (void)_presentVolumeHUDWithVolume:(float)a0;
- (void)_controlCenterDidDismiss:(id)a0;
- (void)handleVolumeButtonWithType:(long long)a0 down:(BOOL)a1;
- (void)changeVolumeByDelta:(float)a0;
- (id)presentedVolumeHUDViewController;
- (BOOL)_isCategoryAlwaysHidden:(id)a0;
- (void)toggleMute;
- (id)initWithHUDController:(id)a0 ringerControl:(id)a1 telephonyManager:(id)a2 conferenceManager:(id)a3;
- (BOOL)_isHUDDisplayableWithReason:(id *)a0;
- (void)_updateEffectiveVolume:(float)a0;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (id)elasticHUDViewControllerRequestsLiveRendering:(id)a0 forReason:(id)a1;
- (id)existingVolumeHUDViewController;
- (void)setVolume:(float)a0 forCategory:(id)a1;
- (void)removeAlwaysHiddenCategory:(id)a0;
- (float)elasticValueViewControllerCurrentValue:(id)a0;
- (BOOL)_isHUDDisplayableForCategory:(id)a0 outReason:(id *)a1;
- (id)avSystemControllerDispatchQueue;
- (void)_controlCenterWillPresent:(id)a0;
- (id)acquireVolumeHUDHiddenAssertionForReason:(id)a0;
- (BOOL)_isHUDDisplayableForLastEventCategoryWithReason:(id *)a0;
- (void).cxx_destruct;
- (void)clearAlwaysHiddenCategories;

@end
