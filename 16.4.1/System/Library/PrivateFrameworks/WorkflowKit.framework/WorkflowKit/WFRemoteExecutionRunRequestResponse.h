@class NSError, NSString, WFRemoteExecutionCoordinator, NSData, NSDictionary, NSMutableArray, WFContentCollection;

@interface WFRemoteExecutionRunRequestResponse : WFRemoteExecutionRequest <WFPBCodable>

@property (retain, nonatomic) NSMutableArray *variablesData;
@property (retain, nonatomic) NSMutableArray *outputData;
@property (retain, nonatomic) NSData *errorData;
@property (retain, nonatomic) WFRemoteExecutionCoordinator *coordinator;
@property (readonly, nonatomic) NSString *runRequestIdentifier;
@property (readonly, nonatomic) NSDictionary *variables;
@property (readonly, nonatomic) WFContentCollection *output;
@property (readonly, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)version;

- (id)initWithData:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)inflateOutputData:(id)a0 fileCoordinator:(id)a1 completion:(id /* block */)a2;
- (void)inflateVariablesData:(id)a0 fileCoordinator:(id)a1 completion:(id /* block */)a2;
- (void)inflateWithFileCoordinator:(id)a0 completion:(id /* block */)a1;
- (id)initWithRunRequestIdentifier:(id)a0 variables:(id)a1 output:(id)a2 error:(id)a3;
- (BOOL)readMessageFromData:(id)a0 error:(id *)a1;
- (id)writeMessageToWriter:(id)a0 error:(id *)a1;

@end
