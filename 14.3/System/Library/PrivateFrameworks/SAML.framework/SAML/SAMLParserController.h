@class NSData;

@interface SAMLParserController : NSObject

@property (retain, nonatomic) NSData *schemaData;

+ (id)sharedInstance;
+ (void)initialize;

- (id)schema;
- (id)init;
- (void).cxx_destruct;
- (id)parseCachedResponse:(id)a0 error:(id *)a1;
- (id)dataFromString:(id)a0 error:(id *)a1;
- (id)newAttributeQuery:(id)a0 error:(id *)a1;
- (id)newAuthNRequest:(id)a0 error:(id *)a1;
- (id)newAuthZQuery:(id)a0 channelId:(id)a1 error:(id *)a2;
- (id)newLogoutRequest:(id *)a0;
- (id)parseResponse:(id)a0 error:(id *)a1;

@end
