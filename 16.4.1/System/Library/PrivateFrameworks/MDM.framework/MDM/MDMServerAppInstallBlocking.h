@class MDMServerCore, NSObject;
@protocol OS_dispatch_queue;

@interface MDMServerAppInstallBlocking : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *appBlockQueue;
@property (copy, nonatomic) id /* block */ appBlockCompletionBlock;
@property (weak, nonatomic) MDMServerCore *server;

- (void)unblockAppInstallsWithCompletion:(id /* block */)a0;
- (void)blockAppInstallsWithCompletion:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)didUnblockAppInstalls;
- (BOOL)isAppInstallBlocked;

@end
