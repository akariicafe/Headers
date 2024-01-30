@class NSData;

@interface MSCMSMessageDigestAttribute : NSObject <MSCMSAttributeCoder>

@property (retain) NSData *messageDigest;

+ (id)messageDigestAttributeWithDigest:(id)a0;

- (void).cxx_destruct;
- (id)encodeAttributeWithError:(id *)a0;
- (id)initWithAttribute:(id)a0 error:(id *)a1;
- (id)initWithDigest:(id)a0;

@end
