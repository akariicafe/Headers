@class NSString;

@interface PKTransactionSearchQuery : PKSearchQuery

@property (retain, nonatomic) NSString *passUniqueIdentifier;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)domain;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 keyboardLanguage:(id)a1 passUniqueIdentifier:(id)a2;
- (unsigned long long)hash;

@end
