@class HDCodableTinkerPairingRequest;

@interface HDRemoteTinkerPairingRequestContext : NSObject {
    HDCodableTinkerPairingRequest *_request;
    id /* block */ _completion;
}

- (void).cxx_destruct;

@end
