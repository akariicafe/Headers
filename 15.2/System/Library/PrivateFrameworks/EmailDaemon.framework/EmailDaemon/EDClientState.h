@class NSArray, NSString, NSObject;
@protocol OS_os_log;

@interface EDClientState : NSObject <EDClientStateReporting, EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (nonatomic) BOOL isRunningTests;
@property (retain) NSArray *visibleMailboxesObjectIds;
@property (readonly, nonatomic) BOOL isForeground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)setClientIsInForeground:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (id)giveBoostWithCompletionBlock:(id /* block */)a0;
- (void)setCurrentlyVisibleMailboxObjectIDs:(id)a0;
- (void)setClientIsRunningTests:(BOOL)a0;
- (void)dealloc;

@end
