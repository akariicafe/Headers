@class NSData;

@interface DAHomeKeyInformation : NSObject

@property (readonly) NSData *appletIdentifier;
@property (readonly) NSData *publicKey;
@property (readonly) NSData *readerIdentifier;

+ (BOOL)supportsSecureCoding;
+ (id)withEndpoint:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
