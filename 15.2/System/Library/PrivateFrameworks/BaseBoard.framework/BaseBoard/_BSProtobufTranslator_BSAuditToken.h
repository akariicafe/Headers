@class NSData, NSString;

@interface _BSProtobufTranslator_BSAuditToken : NSObject <BSProtobufSerializable>

@property (retain) NSData *tokenData;
@property (retain) NSString *bundleID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)protobufSchema;

- (id)didFinishProtobufDecodingWithError:(out id *)a0;
- (void).cxx_destruct;
- (id)initProtobufTranslatorForObject:(id)a0;

@end
