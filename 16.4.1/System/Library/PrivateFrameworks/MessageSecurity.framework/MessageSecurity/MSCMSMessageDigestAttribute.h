@class NSData, MSOID;

@interface MSCMSMessageDigestAttribute : NSObject <MSCMSAttributeCoder>

@property (retain) NSData *messageDigest;
@property (readonly, retain) MSOID *attributeType;

+ (id)messageDigestAttributeWithDigest:(id)a0;

- (void).cxx_destruct;
- (id)initWithAttribute:(id)a0 error:(id *)a1;
- (id)initWithDigest:(id)a0;
- (id)encodeAttributeWithError:(id *)a0;

@end
