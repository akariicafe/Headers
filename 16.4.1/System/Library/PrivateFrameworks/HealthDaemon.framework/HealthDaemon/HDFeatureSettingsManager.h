@class NSMutableDictionary, HDProfile, NSObject;
@protocol OS_dispatch_queue;

@interface HDFeatureSettingsManager : NSObject {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_observersByFeatureIdentifier;
}

- (void)registerObserver:(id)a0 featureIdentifier:(id)a1 queue:(id)a2;
- (id)initWithProfile:(id)a0;
- (void)_settingsDidSyncNotification:(id)a0;
- (BOOL)setFeatureSettingsString:(id)a0 forKey:(id)a1 featureIdentifier:(id)a2 error:(id *)a3;
- (void)dealloc;
- (BOOL)resetFeatureSettingsForFeatureIdentifier:(id)a0 suppressNotificationsToObserver:(id)a1 error:(id *)a2;
- (BOOL)setFeatureSettingsNumber:(id)a0 forKey:(id)a1 featureIdentifier:(id)a2 error:(id *)a3;
- (void)unregisterObserver:(id)a0;
- (BOOL)setFeatureSettingsValues:(id)a0 featureIdentifier:(id)a1 suppressNotificationsToObserver:(id)a2 error:(id *)a3;
- (id)featureSettingsForFeatureIdentifier:(id)a0 error:(id *)a1;
- (void)unregisterObserver:(id)a0 featureIdentifier:(id)a1;
- (void).cxx_destruct;
- (BOOL)setFeatureSettingsData:(id)a0 forKey:(id)a1 featureIdentifier:(id)a2 error:(id *)a3;
- (BOOL)removeFeatureSettingsValueForKey:(id)a0 featureIdentifier:(id)a1 error:(id *)a2;

@end
