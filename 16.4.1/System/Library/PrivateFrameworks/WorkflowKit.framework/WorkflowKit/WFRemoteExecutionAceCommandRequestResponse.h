@class NSString, NSDictionary, NSError;

@interface WFRemoteExecutionAceCommandRequestResponse : WFRemoteExecutionRequest <WFPBCodable>

@property (readonly, nonatomic) NSString *originatingRequestIdentifier;
@property (readonly, nonatomic) NSDictionary *aceCommandResponseDictionary;
@property (readonly, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)version;

- (id)initWithData:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithOriginatingRequestIdentifier:(id)a0 aceCommandResponseDictionary:(id)a1 error:(id)a2;
- (BOOL)readMessageFromData:(id)a0 error:(id *)a1;
- (id)writeMessageToWriter:(id)a0 error:(id *)a1;

@end
