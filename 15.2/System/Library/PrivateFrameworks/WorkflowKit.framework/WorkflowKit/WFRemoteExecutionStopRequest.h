@class NSString;

@interface WFRemoteExecutionStopRequest : WFRemoteExecutionRequest

@property (readonly, nonatomic) NSString *requestIdentifier;

+ (long long)version;

- (void).cxx_destruct;
- (id)initWithRequestIdentifier:(id)a0;
- (BOOL)readMessageFromData:(id)a0 error:(id *)a1;
- (id)writeMessageToWriter:(id)a0 error:(id *)a1;

@end
