@class MSOID;

@interface MSCMSContentTypeAttribute : NSObject <MSCMSAttributeCoder>

@property (retain) MSOID *contentType;

+ (id)contentTypeAttributeWithOID:(id)a0;

- (void).cxx_destruct;
- (id)initWithOID:(id)a0;
- (id)encodeAttributeWithError:(id *)a0;
- (id)initWithAttribute:(id)a0 error:(id *)a1;

@end
