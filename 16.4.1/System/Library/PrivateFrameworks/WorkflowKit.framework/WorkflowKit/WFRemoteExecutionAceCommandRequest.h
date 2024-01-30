@class NSDictionary, NSString;

@interface WFRemoteExecutionAceCommandRequest : WFRemoteExecutionRequest <WFPBCodable>

@property (readonly, nonatomic) NSDictionary *aceCommandDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)version;

- (id)initWithData:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithAceCommandDictionary:(id)a0;
- (BOOL)readMessageFromData:(id)a0 error:(id *)a1;
- (id)writeMessageToWriter:(id)a0 error:(id *)a1;

@end
