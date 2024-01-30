@class NSArray;

@interface CPSValidationRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *urls;
@property (readonly, nonatomic) NSArray *bundleIdentifiers;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithValidation:(id)a0;
- (void)validateWithCompletion:(id /* block */)a0;
- (id)initWithURLs:(id)a0 bundleIDs:(id)a1;

@end
