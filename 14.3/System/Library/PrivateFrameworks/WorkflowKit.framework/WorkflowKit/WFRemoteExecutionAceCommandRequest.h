@class NSDictionary, NSString;

@interface WFRemoteExecutionAceCommandRequest : WFRemoteExecutionRequest <WFPBCodable>

@property (readonly, nonatomic) NSDictionary *aceCommandDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)version;

- (void).cxx_destruct;
- (id)initWithData:(id)a0 error:(id *)a1;
- (BOOL)readMessageFromData:(id)a0 error:(id *)a1;
- (id)writeMessageToWriter:(id)a0 error:(id *)a1;
- (id)initWithAceCommandDictionary:(id)a0;

@end
