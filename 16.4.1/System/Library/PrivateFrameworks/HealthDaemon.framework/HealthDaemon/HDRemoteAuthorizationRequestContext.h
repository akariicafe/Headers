@class HKAuthorizationRequestRecord;

@interface HDRemoteAuthorizationRequestContext : NSObject {
    HKAuthorizationRequestRecord *_requestRecord;
    id /* block */ _requestSentHandler;
    id /* block */ _completion;
}

- (void).cxx_destruct;

@end
