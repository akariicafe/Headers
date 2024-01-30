@class NSString, WFAlert, WFREPBAlert;

@interface WFRemoteExecutionAlertRequest : WFRemoteExecutionRequest

@property (retain, nonatomic) WFREPBAlert *pbAlert;
@property (readonly, nonatomic) NSString *associatedRunRequestIdentifier;
@property (readonly, nonatomic) WFAlert *alert;

+ (long long)version;

- (void).cxx_destruct;
- (void)inflateAlertWithBlock:(id /* block */)a0;
- (id)initWithAlert:(id)a0 associatedRunRequestIdentifier:(id)a1;
- (BOOL)readMessageFromData:(id)a0 error:(id *)a1;
- (id)writeMessageToWriter:(id)a0 error:(id *)a1;

@end
