@class NSString;

@interface PHCloudIdentifier : NSObject <NSSecureCoding>

@property (class, readonly, nonatomic) PHCloudIdentifier *notFoundIdentifier;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *localCloudIdentifier;
@property (readonly, nonatomic) NSString *identifierCode;
@property (readonly, nonatomic) NSString *stringValue;

- (void).cxx_destruct;
- (id)initAsNotFoundIdentifier;
- (id)initWithLocalCloudIdentifier:(id)a0 identifierCode:(id)a1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithStringValue:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
