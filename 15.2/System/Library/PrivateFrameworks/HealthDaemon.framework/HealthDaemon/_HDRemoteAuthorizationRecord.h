@class HKAuthorizationRequestRecord;

@interface _HDRemoteAuthorizationRecord : NSObject {
    HKAuthorizationRequestRecord *_record;
    id /* block */ _requestSentHandler;
    id /* block */ _requestFinishedHandler;
}

- (void).cxx_destruct;

@end
