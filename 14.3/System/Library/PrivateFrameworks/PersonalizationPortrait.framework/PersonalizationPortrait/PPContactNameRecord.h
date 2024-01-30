@interface PPContactNameRecord : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)describeChangeType:(unsigned char)a0;
+ (id)describeSource:(unsigned char)a0;

- (id)organizationName;
- (id)cityNames;
- (id)relatedNames;
- (id)sourceIdentifier;
- (id)phoneticMiddleName;
- (id)firstName;
- (id)lastName;
- (id)phoneticFirstName;
- (id)jobTitle;
- (id)streetNames;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)score;
- (id)phoneticLastName;
- (id)nickname;
- (id)middleName;
- (unsigned char)changeType;
- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToContactNameRecord:(id)a0;
- (unsigned char)source;
- (id)initWithIdentifier:(id)a0 score:(double)a1 source:(unsigned char)a2 sourceIdentifier:(id)a3 changeType:(unsigned char)a4 firstName:(id)a5 phoneticFirstName:(id)a6 middleName:(id)a7 phoneticMiddleName:(id)a8 lastName:(id)a9 phoneticLastName:(id)a10 organizationName:(id)a11 jobTitle:(id)a12 nickname:(id)a13 relatedNames:(id)a14 streetNames:(id)a15 cityNames:(id)a16;
- (id)init_;
- (id)identifier;
- (void)encodeWithCoder:(id)a0;

@end
