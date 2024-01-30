@class NSUUID, NSString, NWPathEvaluator, NSURL, NSURLResponse, NSURLRequest, NSObject, NSMutableData;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface NEFilterSource : NSObject

@property BOOL registered;
@property (retain) NSMutableData *pendingData;
@property (retain) NWPathEvaluator *evaluator;
@property (retain) NSUUID *flowUUID;
@property unsigned long long lastPendingDataStartIndex;
@property unsigned long long lastSendDataLength;
@property unsigned long long pendingDataStartIndex;
@property unsigned long long peekIndex;
@property unsigned long long passLength;
@property (retain) NSURLResponse *currentResponse;
@property (retain) NSURLRequest *currentRequest;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSString *urlAppendString;
@property (retain) NSString *remediationURL;
@property (retain) NSString *remediationButtonText;
@property (retain) NSString *organization;
@property BOOL expectRemediation;
@property (retain) NSURL *parentURL;
@property (retain) NSURL *url;
@property unsigned int controlUnit;
@property (readonly) struct ne_filter_globals { } *globals;
@property unsigned long long byteInboundCount;
@property unsigned long long byteOutboundCount;
@property (retain) NSObject<OS_dispatch_group> *sendDataGroup;
@property (readonly) long long status;
@property (readonly) long long direction;
@property (readonly) unsigned long long socketIdentifier;
@property (copy) NSString *sourceAppIdentifier;
@property int sourceAppPid;

+ (BOOL)filterRequired;

- (void).cxx_destruct;
- (void)initGlobals;
- (id)filterOptions;
- (id)initWithDecisionQueue:(id)a0;
- (void)willSendRequest:(id)a0 decisionHandler:(id /* block */)a1;
- (void)receivedResponse:(id)a0 decisionHandler:(id /* block */)a1;
- (void)receivedData:(id)a0 decisionHandler:(id /* block */)a1;
- (void)finishedLoadingWithDecisionHandler:(id /* block */)a0;
- (void)remediateWithDecisionHandler:(id /* block */)a0;
- (BOOL)generateCryptoSignature:(unsigned char[32])a0 length:(unsigned int *)a1;
- (void)connectToFilterUnit:(unsigned int)a0 withCompletionHandler:(id /* block */)a1;
- (void)prepareAgentForURL:(id)a0 urlRequest:(id)a1 urlResponse:(id)a2 parentURL:(id)a3 direction:(long long)a4 flowUUID:(id)a5 handler:(id /* block */)a6;
- (BOOL)sendDataToPluginWithConnection:(id)a0 completionHandler:(id /* block */)a1;
- (id)mergeURLString:(id)a0 withAppendString:(id)a1;
- (id)replacementData;
- (void)prepareAgentWithHandler:(id /* block */)a0;
- (void)prepareAgentForRequest:(id)a0 handler:(id /* block */)a1;
- (void)prepareAgentForResponse:(id)a0 handler:(id /* block */)a1;
- (void)handleFinishedLoadingWithDecisionHandler:(id /* block */)a0;
- (id)initWithURL:(id)a0 direction:(long long)a1 socketIdentifier:(unsigned long long)a2;
- (void)addData:(id)a0 withCompletionQueue:(id)a1 completionHandler:(id /* block */)a2;
- (void)dataCompleteWithCompletionQueue:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithParentURL:(id)a0 decisionQueue:(id)a1;

@end
