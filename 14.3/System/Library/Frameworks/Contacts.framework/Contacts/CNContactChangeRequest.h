@class NSArray, NSString;

@interface CNContactChangeRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *contacts;
@property (readonly, copy, nonatomic) NSArray *contactIdentifiers;
@property (readonly, nonatomic) long long kind;
@property (readonly, copy, nonatomic) NSString *linkIdentifier;

+ (id)contactChangeRequestWithKind:(long long)a0 contacts:(id)a1 linkIdentifier:(id)a2;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithKind:(long long)a0 contacts:(id)a1 linkIdentifier:(id)a2;
- (void)encodeWithCoder:(id)a0;

@end
