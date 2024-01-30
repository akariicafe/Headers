@class HDCodableTinkerOptInRequest;

@interface HDRemoteTinkerOptInRequestContext : NSObject

@property (retain, nonatomic) HDCodableTinkerOptInRequest *request;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;

@end
