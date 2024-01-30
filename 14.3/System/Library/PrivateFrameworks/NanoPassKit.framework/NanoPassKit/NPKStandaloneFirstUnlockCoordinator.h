@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface NPKStandaloneFirstUnlockCoordinator : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableArray *blocksToPerformAfterFirstDeviceUnlock;
@property (nonatomic) int firstDeviceUnlockRegistrationToken;

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)performSubjectToFirstUnlock:(id /* block */)a0;
- (void)_performFirstUnlockWork;

@end
