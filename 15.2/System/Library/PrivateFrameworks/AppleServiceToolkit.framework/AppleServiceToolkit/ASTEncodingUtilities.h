@interface ASTEncodingUtilities : NSObject

+ (id)jsonSerializeObject:(id)a0 error:(id *)a1;
+ (id)parseJSONResponseWithData:(id)a0 error:(id *)a1;
+ (id)MD5ForString:(id)a0;
+ (id)MD5ForData:(id)a0;
+ (id)MD5ForFileHandle:(id)a0;

@end
