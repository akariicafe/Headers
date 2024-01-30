@interface CDMFoundation.CDMProtobufConverter : NSObject

+ (id)serializeSpanMatchResponseWithResponse:(id)a0 formatType:(id)a1;
+ (id)serializeSNLCParserRequestWithRequest:(id)a0 formatType:(id)a1;
+ (id)serializeSNLCParserResponseWithResponse:(id)a0 formatType:(id)a1;
+ (id)serializeNlv4ParserRequestWithRequest:(id)a0 formatType:(id)a1;
+ (id)serializeNlv4ParserResponseWithResponse:(id)a0 formatType:(id)a1;
+ (id)nluRequestJsonToSIRINLUWithProtoJson:(id)a0;
+ (id)siriExternalNluRequestJsonToObjWithProto2Json:(id)a0;
+ (id)siriInternalMatchingSpanJsonToObjWithProto2Json:(id)a0;
+ (id)nluResponseFromSIRINLUWithResponse:(id)a0 formatType:(id)a1;
+ (id)nluResponseFromSIRINLUEXTERNALCDMNluResponseWithResponse:(id)a0 formatType:(id)a1;
+ (id)serializePreprocessingWrapperWithWrapper:(id)a0 formatType:(id)a1;

- (void).cxx_destruct;
- (id)init;

@end
