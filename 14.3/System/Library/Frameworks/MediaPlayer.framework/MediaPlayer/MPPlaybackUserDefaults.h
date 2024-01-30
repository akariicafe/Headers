@class NSNumber, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MPPlaybackUserDefaults : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _allowsHighQualityMusicStreamingOnCellular;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    long long _musicRepeatType;
    long long _musicShuffleType;
    BOOL _soundCheckEnabled;
    BOOL _speakerRouteEnabled;
    BOOL _includeContentItemDebugFields;
    NSMutableDictionary *_lastSiriPlaybackContextIDs;
    struct vector<int, std::__1::allocator<int> > { int *__begin_; int *__end_; struct __compressed_pair<int *, std::__1::allocator<int> > { int *__value_; } __end_cap_; } _notifyTokens;
    NSObject<OS_dispatch_queue> *_userDefaultsMutationQueue;
    NSNumber *_currentPrivateListeningEnabledValue;
    NSObject<OS_dispatch_queue> *_loadValuesQueue;
}

@property (readonly, nonatomic) BOOL allowsHighQualityMusicStreamingOnCellular;
@property (readonly, nonatomic) int musicEQPreset;
@property (nonatomic) long long musicRepeatType;
@property (nonatomic) long long musicShuffleType;
@property (readonly, nonatomic) BOOL soundCheckEnabled;
@property (readonly, nonatomic) BOOL speakerRouteEnabled;
@property (readonly, nonatomic) BOOL includeContentItemDebugFields;
@property (readonly, nonatomic) unsigned long long preferredVideosAssetQualityOnCellular;
@property (readonly, nonatomic) unsigned long long preferredVideosAssetQualityOnWifi;
@property (copy, nonatomic, getter=isPrivateListeningEnabled) NSNumber *privateListeningEnabled;
@property (copy, nonatomic, getter=isDevicePrivateListeningEnabled) NSNumber *devicePrivateListeningEnabled;

+ (id)standardUserDefaults;

- (void)_accountStoreChangedNotification:(id)a0;
- (id)init;
- (void)_addNotificationObserver:(id /* block */)a0 forUserDefaultKey:(struct __CFString { } *)a1;
- (void)_postRepeatShuffleTypeGlobalNotification;
- (void).cxx_destruct;
- (void)_mobileiPodPrefsDidChange;
- (void)dealloc;
- (void)setAutoPlayEnabled:(BOOL)a0 forUserIdentity:(id)a1;
- (id)lastSiriPlaybackContextIDForPlayerID:(id)a0;
- (BOOL)privateListeningEnabledForHomeUserIdentifier:(id)a0 error:(id *)a1;
- (void)_loadAccountProperties;
- (id).cxx_construct;
- (void)setPrivateListeningEnabled:(BOOL)a0 forHomeUserIdentifier:(id)a1 error:(id *)a2;
- (long long)_calculateCurrentMusicRepeatType;
- (BOOL)autoPlayEnabledForUserIdentity:(id)a0;
- (void)setLastSiriPlaybackContextID:(id)a0 forPlayerID:(id)a1;
- (int)_calculateCurrentMusicEQPreset;
- (long long)_calculateCurrentMusicShuffleType;

@end
