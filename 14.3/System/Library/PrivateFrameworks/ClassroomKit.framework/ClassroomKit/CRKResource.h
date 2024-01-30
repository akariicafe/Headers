@class NSURL, NSDictionary;

@interface CRKResource : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *hostedURL;
@property (nonatomic, getter=isZippedBundle) BOOL zippedBundle;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithHostedURL:(id)a0 isZippedBundle:(BOOL)a1;
- (BOOL)isEqualToHostedResource:(id)a0;

@end
