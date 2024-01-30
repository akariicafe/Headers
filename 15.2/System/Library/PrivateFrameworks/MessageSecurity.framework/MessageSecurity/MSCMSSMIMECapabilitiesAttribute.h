@class NSSet;

@interface MSCMSSMIMECapabilitiesAttribute : NSObject <MSCMSAttributeCoder>

@property (readonly) NSSet *capabilities;

- (void).cxx_destruct;
- (id)init;
- (id)encodeAttributeWithError:(id *)a0;
- (id)initWithAttribute:(id)a0 error:(id *)a1;

@end
