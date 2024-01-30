@class NSString, NSArray;

@interface SFAppleIDContactInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *firstName;
@property (retain, nonatomic) NSString *lastName;
@property (retain, nonatomic) NSArray *validatedEmailAddresses;
@property (retain, nonatomic) NSArray *validatedPhoneNumbers;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqualToContactInfo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
