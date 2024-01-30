@interface CDMNluLogUtil : NSObject

+ (id)getLogBasePath;
+ (BOOL)saveSpanMatchResponseToProtobuf:(id)a0 protobufFile:(id)a1 error:(id *)a2;
+ (BOOL)saveResponseToProtobuf:(id)a0 protobufFile:(id)a1 error:(id *)a2;
+ (BOOL)saveProtoFile:(id)a0 protobufFile:(id)a1 error:(id *)a2;
+ (BOOL)saveString:(id)a0 toFile:(id)a1 error:(id *)a2;
+ (id)logRequestToTmp:(id)a0 error:(id *)a1;
+ (id)logResponseToTmp:(id)a0 error:(id *)a1;
+ (id)logNlv4RequestToTmp:(id)a0 error:(id *)a1;
+ (id)logNlv4ResponseToTmp:(id)a0 error:(id *)a1;
+ (id)logSNLCRequestToTmp:(id)a0 error:(id *)a1;
+ (id)logSNLCResponseToTmp:(id)a0 error:(id *)a1;
+ (id)loadRequestFromXmlFile:(id)a0;
+ (id)prettyPrintResponse:(id)a0;
+ (id)loadResponseFromXmlFile:(id)a0;
+ (id)stringForTopParseUserStatedTask:(id)a0;
+ (id)prettyPrintProtoResponse:(id)a0;
+ (id)loadRequestFromProtobufFile:(id)a0 error:(id *)a1;
+ (id)loadRequestFromProtobuf2File:(id)a0 error:(id *)a1;
+ (id)loadOverrideSpansFromProtobuf2File:(id)a0 error:(id *)a1;
+ (BOOL)saveResponseToProtobuf2:(id)a0 protobufFile:(id)a1 error:(id *)a2;
+ (BOOL)saveCLIResult:(id)a0 protobufFile:(id)a1 preprocess:(BOOL)a2 saveBinary:(BOOL)a3 error:(id *)a4;

@end
