@class NSString, RERelevanceEnginePreferences, NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface RERelevanceEnginePreferencesController : NSObject <RERelevanceEnginePreferencesDelegate> {
    NSMapTable *_preferences;
    RERelevanceEnginePreferences *_effectivePreferences;
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) RERelevanceEnginePreferences *effectivePreferences;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)removePreferencesForObject:(id)a0;
- (void)setPreferences:(id)a0 forObject:(id)a1;
- (void)_resetEffectivePreferences;
- (void)relevanceEnginePreferencesDidUpdate:(id)a0;

@end
