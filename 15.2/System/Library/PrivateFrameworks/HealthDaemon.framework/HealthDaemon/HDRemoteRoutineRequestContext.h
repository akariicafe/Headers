@class HDCodableRoutineRequestMessage;

@interface HDRemoteRoutineRequestContext : NSObject {
    HDCodableRoutineRequestMessage *_request;
    id /* block */ _completion;
}

- (void).cxx_destruct;

@end
