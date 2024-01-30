@class HDCodableTinkerPairingRequest;

@interface HDRemoteTinkerPairingRequestContext : NSObject

@property (retain, nonatomic) HDCodableTinkerPairingRequest *request;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;

@end
