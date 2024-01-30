@class NSString, HDProfile, NSObject;
@protocol OS_dispatch_queue;

@interface HDMigrationManager : NSObject <HDContentProtectionObserver, HDHealthDaemonReadyObserver>

@property (weak, nonatomic) HDProfile *profile;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL needsProtectedDataMigration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)contentProtectionStateChanged:(long long)a0 previousState:(long long)a1;
- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (void)_queue_performMigrationWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (void)daemonReady:(id)a0;
- (void)performMigrationWithCompletion:(id /* block */)a0;

@end
