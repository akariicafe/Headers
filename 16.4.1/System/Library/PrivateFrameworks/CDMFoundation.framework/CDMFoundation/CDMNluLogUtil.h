@interface CDMNluLogUtil : NSObject

+ (id)getLogBasePath;
+ (id)loadOverrideSpansFromProtobuf2File:(id)a0 error:(id *)a1;
+ (id)loadRequestFromProtobuf2File:(id)a0 error:(id *)a1;
+ (id)prettyPrintProtoResponse:(id)a0;
+ (id)prettyPrintResponse:(id)a0;
+ (BOOL)saveCLIResult:(id)a0 protobufFile:(id)a1 preprocess:(BOOL)a2 saveBinary:(BOOL)a3 error:(id *)a4;
+ (BOOL)savePreprocessingWrapperJson:(id)a0 toFile:(id)a1 error:(id *)a2;
+ (BOOL)saveProtoFile:(id)a0 protobufFile:(id)a1 error:(id *)a2;
+ (BOOL)saveResponseToProtobuf2:(id)a0 protobufFile:(id)a1 error:(id *)a2;
+ (BOOL)saveResponseToProtobuf:(id)a0 protobufFile:(id)a1 error:(id *)a2;
+ (BOOL)saveSpanMatchResponseToProtobuf:(id)a0 protobufFile:(id)a1 error:(id *)a2;
+ (BOOL)saveString:(id)a0 toFile:(id)a1 error:(id *)a2;
+ (id)writeLVCRequestToDisk:(id)a0 error:(id *)a1;
+ (id)writeLVCResponseToDisk:(id)a0 error:(id *)a1;
+ (id)writeMDRequestToDisk:(id)a0 error:(id *)a1;
+ (id)writeMDResponseToDisk:(id)a0 error:(id *)a1;
+ (id)writeMRRequestToDisk:(id)a0 error:(id *)a1;
+ (id)writeMRResponseToDisk:(id)a0 error:(id *)a1;
+ (id)writeNlv4RequestToDisk:(id)a0 error:(id *)a1;
+ (id)writeNlv4ResponseToDisk:(id)a0 error:(id *)a1;
+ (id)writePSCRequestToDisk:(id)a0 error:(id *)a1;
+ (id)writePSCResponseToDisk:(id)a0 error:(id *)a1;
+ (id)writeSNLCRequestToDisk:(id)a0 error:(id *)a1;
+ (id)writeSNLCResponseToDisk:(id)a0 error:(id *)a1;
+ (id)writeSSURequestToDisk:(id)a0 error:(id *)a1;
+ (id)writeSSUResponseToDisk:(id)a0 error:(id *)a1;
+ (id)writeUaaPRequestToDisk:(id)a0 error:(id *)a1;
+ (id)writeUaaPResponseToDisk:(id)a0 error:(id *)a1;

@end
