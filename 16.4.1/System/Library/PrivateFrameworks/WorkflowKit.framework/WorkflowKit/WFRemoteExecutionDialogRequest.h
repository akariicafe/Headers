@class NSString, WFDialogRequest;

@interface WFRemoteExecutionDialogRequest : WFRemoteExecutionRequest <WFPBCodable>

@property (readonly, nonatomic) NSString *runRequestIdentifier;
@property (readonly, nonatomic) WFDialogRequest *dialogRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)version;

- (id)initWithData:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithDialogRequest:(id)a0 runRequestIdentifier:(id)a1;
- (BOOL)readMessageFromData:(id)a0 error:(id *)a1;
- (id)writeMessageToWriter:(id)a0 error:(id *)a1;

@end
