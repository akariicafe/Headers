@class CATOperationQueue, NSString, CATOperation, CRKClassroomInstallation, CATTaskClient, NSObject;
@protocol CRKToolCommandDelegate, OS_dispatch_source;

@interface CRKToolCommand : NSObject <CATTaskClientDelegate> {
    NSObject<OS_dispatch_source> *mSIGINTSource;
    CATTaskClient *mTaskClient;
    CATOperationQueue *mOperationQueue;
    CATOperation *mOperation;
}

@property (class, readonly, nonatomic) BOOL supportsJSON;
@property (class, readonly, nonatomic) BOOL supportsVerboseOutput;
@property (class, readonly, nonatomic) BOOL supportsDMFRequest;

@property (nonatomic, getter=shouldPrintJSON) BOOL printJSON;
@property (nonatomic, getter=shouldPrintVerbose) BOOL printVerbose;
@property (nonatomic, getter=shouldUseDMFRequest) BOOL useDMFRequest;
@property (weak, nonatomic) id<CRKToolCommandDelegate> delegate;
@property (copy, nonatomic) NSString *sessionIdentifier;
@property (retain, nonatomic) CRKClassroomInstallation *targetClassroomInstallation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)help;
+ (id)aliases;
+ (id)description;
+ (BOOL)instructorCommand;
+ (void)printHelp;
+ (BOOL)handlesProgress;
+ (id)subcommandPath;

- (id)transportProvider;
- (void)client:(id)a0 didInterruptWithError:(id)a1;
- (void).cxx_destruct;
- (void)clientDidConnect:(id)a0;
- (void)clientDidDisconnect:(id)a0;
- (id)init;
- (void)client:(id)a0 didReceiveNotificationWithName:(id)a1 userInfo:(id)a2;
- (void)remoteTaskDidFinish:(id)a0;
- (void)runWithClient:(id)a0 arguments:(id)a1;
- (void)connectToTaskClientWithCompletionBlock:(id /* block */)a0;
- (id)operationWithClient:(id)a0 arguments:(id)a1;
- (void)executeOperation:(id)a0;
- (id)arrayByParsingAndRemovingArgumentFlags:(id)a0;
- (id)DMFRequestWithArguments:(id)a0;
- (id)requestWithArguments:(id)a0;
- (void)_remoteTaskDidProgress:(id)a0;
- (void)_remoteTaskDidFinish:(id)a0;
- (void)remoteTaskDidProgress:(id)a0;
- (void)cleanupAndExitIfNeeded;
- (BOOL)isCommandFinished;
- (BOOL)didCommandSucceed;
- (BOOL)didOperationSucceed:(id)a0;
- (void)runWithArguments:(id)a0;

@end
