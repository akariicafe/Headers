@class NSData;

@interface MSCMSAppleHashAgilityAttribute : NSObject <MSCMSAttributeCoder>

@property (readonly, retain) NSData *hashAgilityValue;

- (void).cxx_destruct;
- (id)encodeAttributeWithError:(id *)a0;
- (id)initWithAttribute:(id)a0 error:(id *)a1;
- (id)initWithHashAgilityValue:(id)a0;

@end
