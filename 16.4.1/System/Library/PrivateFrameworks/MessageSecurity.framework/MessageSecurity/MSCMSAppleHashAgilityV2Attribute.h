@class NSDictionary, MSOID;

@interface MSCMSAppleHashAgilityV2Attribute : NSObject <MSCMSAttributeCoder>

@property (readonly, retain) NSDictionary *hashAgilityValues;
@property (readonly, retain) MSOID *attributeType;

- (void).cxx_destruct;
- (id)initWithAttribute:(id)a0 error:(id *)a1;
- (id)initWithHashAgilityValues:(id)a0;
- (id)encodeAttributeWithError:(id *)a0;

@end
