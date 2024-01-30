@class NSObject, NSString, MBManager;
@protocol OS_dispatch_queue;

@interface MDMBackupManager : NSObject <MBManagerDelegate>

@property (retain, nonatomic) MBManager *manager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSString *personaIdentifier;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPersonaIdentifier:(id)a0;
- (void)isCloudBackupInProgressWithCompletion:(id /* block */)a0;

@end
