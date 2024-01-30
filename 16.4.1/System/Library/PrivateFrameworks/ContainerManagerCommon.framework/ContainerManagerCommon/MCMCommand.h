@class NSString, MCMContext;
@protocol MCMResultPromise, MCMReply;

@interface MCMCommand : NSObject <MCMCommand_Internal, MCMCommand_XPC, MCMCommand>

@property (readonly, nonatomic) MCMContext *context;
@property (readonly, nonatomic) id<MCMReply> reply;
@property (readonly, nonatomic) id<MCMResultPromise> resultPromise;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;
+ (void)relayToPrivilegedDaemonMessage:(id)a0 reply:(id)a1 context:(id)a2;
+ (void)relayToPrivilegedDaemonMessage:(id)a0 reply:(id)a1 context:(id)a2 resultPromise:(id)a3;

- (void)execute;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (BOOL)preflightClientAllowed;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0 resultPromise:(id)a1;
- (id)userIdentityForContainerIdentifier:(id)a0 containerClass:(unsigned long long)a1 error:(unsigned long long *)a2;

@end
