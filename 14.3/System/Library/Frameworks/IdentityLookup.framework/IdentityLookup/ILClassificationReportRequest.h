@class NSString, NSDictionary;

@interface ILClassificationReportRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *extensionIdentifier;
@property (copy, nonatomic) NSDictionary *jsonDictionary;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToRequest:(id)a0;
- (id)initWithExtensionIdentifier:(id)a0 jsonDictionary:(id)a1;

@end
