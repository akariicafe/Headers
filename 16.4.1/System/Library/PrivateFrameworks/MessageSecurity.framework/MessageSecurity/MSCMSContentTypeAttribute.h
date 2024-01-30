@class MSOID;

@interface MSCMSContentTypeAttribute : NSObject <MSCMSAttributeCoder>

@property (retain) MSOID *contentType;
@property (readonly, retain) MSOID *attributeType;

+ (id)contentTypeAttributeWithOID:(id)a0;

- (void).cxx_destruct;
- (id)initWithAttribute:(id)a0 error:(id *)a1;
- (id)encodeAttributeWithError:(id *)a0;
- (id)initWithOID:(id)a0;

@end
