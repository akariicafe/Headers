@class NSUUID, NSString, NWPathEvaluator, NSURL, NSURLResponse, NSURLRequest, NSObject, NSMutableData;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface NEFilterSource : NSObject {
    BOOL _registered;
    BOOL _expectRemediation;
    unsigned int _controlUnit;
    NSMutableData *_pendingData;
    NWPathEvaluator *_evaluator;
    NSUUID *_flowUUID;
    unsigned long long _lastPendingDataStartIndex;
    unsigned long long _lastSendDataLength;
    unsigned long long _pendingDataStartIndex;
    unsigned long long _peekIndex;
    unsigned long long _passLength;
    NSURLResponse *_currentResponse;
    NSURLRequest *_currentRequest;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_urlAppendString;
    NSString *_remediationURL;
    NSString *_remediationButtonText;
    NSString *_organization;
    NSURL *_parentURL;
    struct ne_filter_globals { } *_globals;
    unsigned long long _byteInboundCount;
    unsigned long long _byteOutboundCount;
    NSObject<OS_dispatch_group> *_sendDataGroup;
}

@property (retain) NSURL *url;
@property (readonly) long long status;
@property (readonly) long long direction;
@property (readonly) unsigned long long socketIdentifier;
@property (copy) NSString *sourceAppIdentifier;
@property int sourceAppPid;

+ (BOOL)filterRequired;

- (void).cxx_destruct;
- (void)finishedLoadingWithDecisionHandler:(id /* block */)a0;
- (id)initWithDecisionQueue:(id)a0;
- (void)receivedData:(id)a0 decisionHandler:(id /* block */)a1;
- (void)receivedResponse:(id)a0 decisionHandler:(id /* block */)a1;
- (void)remediateWithDecisionHandler:(id /* block */)a0;
- (void)willSendRequest:(id)a0 decisionHandler:(id /* block */)a1;
- (void)addData:(id)a0 withCompletionQueue:(id)a1 completionHandler:(id /* block */)a2;
- (void)dataCompleteWithCompletionQueue:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithURL:(id)a0 direction:(long long)a1 socketIdentifier:(unsigned long long)a2;

@end
