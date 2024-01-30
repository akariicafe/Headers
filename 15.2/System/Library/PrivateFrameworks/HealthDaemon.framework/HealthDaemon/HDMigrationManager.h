@class NSString, HDProfile, NSObject;
@protocol OS_dispatch_queue;

@interface HDMigrationManager : NSObject <HDContentProtectionObserver, HDProfileReadyObserver> {
    BOOL _needsProtectedDataMigration;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (void)contentProtectionStateChanged:(long long)a0 previousState:(long long)a1;
- (void)profileDidBecomeReady:(id)a0;
- (void)performMigrationWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
