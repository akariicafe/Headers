@interface ASTEncodingUtilities : NSObject

+ (id)MD5ForFileHandle:(id)a0;
+ (id)SHA256HashForString:(id)a0;
+ (id)jsonSerializeObject:(id)a0 error:(id *)a1;
+ (id)parseJSONResponseWithData:(id)a0 error:(id *)a1;

@end
