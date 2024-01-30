@class BRCAccountSession, NSURL, NSObject;
@protocol OS_dispatch_source;

@interface BRCFileCoordinator : NSFileCoordinator {
    BRCAccountSession *_session;
    unsigned long long _startStamp;
    NSURL *_url1;
    NSURL *_url2;
    NSObject<OS_dispatch_source> *_timer;
    id /* block */ _doneHandler;
    BOOL _cancelled;
}

@property (nonatomic) BOOL isUpdateForReconnecting;
@property (readonly, nonatomic) BOOL forRead;

+ (void)itemAtPath:(id)a0 logicalFilename:(id)a1 didMoveToPath:(id)a2 logicalFilename:(id)a3 hasContentUpdate:(BOOL)a4;
+ (void)itemAtPath:(id)a0 origLogicalName:(id)a1 didBounceToNewLogicalName:(id)a2;
+ (void)itemDidAppearAtPath:(id)a0 logicalFilename:(id)a1;
+ (void)itemDidChangeAtPath:(id)a0 logicalFilename:(id)a1;
+ (void)itemDidDisappearAtPath:(id)a0 logicalFilename:(id)a1;

- (void)scheduleReadOfItemAtURL:(id)a0 queue:(id)a1 taskTracker:(id)a2 accessor:(id /* block */)a3;
- (void)scheduleRenameOfItemAtURL:(id)a0 toItemAtURL:(id)a1 contentUpdate:(BOOL)a2 queue:(id)a3 taskTracker:(id)a4 accessor:(id /* block */)a5;
- (void)_didObtainCoordination:(id)a0 context:(id)a1 url1:(id)a2 url2:(id)a3 handler:(id /* block */)a4 fcHandler:(id /* block */)a5 error:(id)a6;
- (void)scheduleDeleteOfItemAtURL:(id)a0 queue:(id)a1 taskTracker:(id)a2 accessor:(id /* block */)a3;
- (id)initWithSession:(id)a0 forRead:(BOOL)a1 doneHandler:(id /* block */)a2;
- (void)cancel;
- (void)cancelAfterDelay:(double)a0;
- (void)_willRequestCoordinationWithContext:(id)a0 url1:(id)a1 url2:(id)a2;
- (void)scheduleUpdateOfItemAtURL:(id)a0 queue:(id)a1 taskTracker:(id)a2 accessor:(id /* block */)a3;
- (void).cxx_destruct;

@end
