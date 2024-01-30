@interface CDMFoundation.CDMProtobufConverter : NSObject

+ (id)nluRequestJsonToSIRINLUWithProtoJson:(id)a0;
+ (id)nluResponseFromSIRINLUEXTERNALCDMNluResponseWithResponse:(id)a0 formatType:(id)a1;
+ (id)nluResponseFromSIRINLUWithResponse:(id)a0 formatType:(id)a1;
+ (id)serializeExternalNluRequestWithRequest:(id)a0 formatType:(id)a1;
+ (id)serializeExternalNluResponseWithResponse:(id)a0 formatType:(id)a1;
+ (id)serializeITFMParserRequestWithRequest:(id)a0 formatType:(id)a1;
+ (id)serializeITFMParserResponseWithResponse:(id)a0 formatType:(id)a1;
+ (id)serializeMDRequestWithRequest:(id)a0 formatType:(id)a1;
+ (id)serializeMDResponseWithResponse:(id)a0 formatType:(id)a1;
+ (id)serializeMRRequestWithRequest:(id)a0 formatType:(id)a1;
+ (id)serializeMRResponseWithResponse:(id)a0 formatType:(id)a1;
+ (id)serializeNlv4ParserRequestWithRequest:(id)a0 formatType:(id)a1;
+ (id)serializeNlv4ParserResponseWithResponse:(id)a0 formatType:(id)a1;
+ (id)serializePSCParserRequestWithRequest:(id)a0 formatType:(id)a1;
+ (id)serializePSCParserResponseWithResponse:(id)a0 formatType:(id)a1;
+ (id)serializePreprocessingWrapperWithWrapper:(id)a0 formatType:(id)a1;
+ (id)serializeSNLCParserRequestWithRequest:(id)a0 formatType:(id)a1;
+ (id)serializeSNLCParserResponseWithResponse:(id)a0 formatType:(id)a1;
+ (id)serializeSSURequestWithRequest:(id)a0 formatType:(id)a1;
+ (id)serializeSSUResponseWithResponse:(id)a0 formatType:(id)a1;
+ (id)serializeSpanMatchResponseWithResponse:(id)a0 formatType:(id)a1;
+ (id)serializeTokenizerResponseWithResponse:(id)a0 formatType:(id)a1;
+ (id)serializeUaaPParserRequestWithRequest:(id)a0 formatType:(id)a1;
+ (id)serializeUaaPParserResponseWithResponse:(id)a0 formatType:(id)a1;
+ (id)siriExternalNluRequestJsonToObjWithProto2Json:(id)a0;
+ (id)siriInternalMatchingSpanJsonToObjWithProto2Json:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
