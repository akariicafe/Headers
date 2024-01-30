@class NSString;

@interface PKTransactionSearchQuery : PKSearchQuery

@property (retain, nonatomic) NSString *passUniqueIdentifier;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (unsigned long long)domain;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0 keyboardLanguage:(id)a1 passUniqueIdentifier:(id)a2;
- (void)encodeWithCoder:(id)a0;

@end
