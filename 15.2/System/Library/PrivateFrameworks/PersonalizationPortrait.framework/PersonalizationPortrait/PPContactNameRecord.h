@interface PPContactNameRecord : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)describeChangeType:(unsigned char)a0;
+ (id)describeSource:(unsigned char)a0;

- (long long)compare:(id)a0;
- (id)identifier;
- (id)middleName;
- (id)cityNames;
- (id)nickname;
- (void)encodeWithCoder:(id)a0;
- (unsigned char)source;
- (id)phoneticMiddleName;
- (id)init_;
- (BOOL)isEqualToContactNameRecord:(id)a0;
- (id)relatedNames;
- (double)score;
- (id)description;
- (id)initWithIdentifier:(id)a0 score:(double)a1 source:(unsigned char)a2 sourceIdentifier:(id)a3 changeType:(unsigned char)a4 firstName:(id)a5 phoneticFirstName:(id)a6 middleName:(id)a7 phoneticMiddleName:(id)a8 lastName:(id)a9 phoneticLastName:(id)a10 organizationName:(id)a11 jobTitle:(id)a12 nickname:(id)a13 relatedNames:(id)a14 streetNames:(id)a15 cityNames:(id)a16;
- (id)jobTitle;
- (id)organizationName;
- (BOOL)isEqual:(id)a0;
- (unsigned char)changeType;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)lastName;
- (id)streetNames;
- (unsigned long long)hash;
- (id)sourceIdentifier;
- (id)phoneticFirstName;
- (id)phoneticLastName;
- (id)firstName;

@end
