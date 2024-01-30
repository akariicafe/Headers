@class NSArray;

@interface CNHandleStringClassification : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *emailAddresses;
@property (readonly, copy, nonatomic) NSArray *phoneNumbers;
@property (readonly, copy, nonatomic) NSArray *unknown;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithBuilder:(id)a0;
- (id)initWithEmailAddresses:(id)a0 phoneNumbers:(id)a1 unknown:(id)a2;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
