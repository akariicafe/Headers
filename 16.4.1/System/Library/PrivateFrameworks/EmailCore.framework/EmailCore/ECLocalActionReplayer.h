@class NSString, ECLocalMessageAction, NSError, NSObject;
@protocol OS_os_log, ECLocalActionReplayerDelegate;

@interface ECLocalActionReplayer : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (weak, nonatomic) id<ECLocalActionReplayerDelegate> delegate;
@property (retain, nonatomic) ECLocalMessageAction *action;
@property (retain, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAction:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)failActionWithError:(id)a0;
- (id)replayAction;

@end
