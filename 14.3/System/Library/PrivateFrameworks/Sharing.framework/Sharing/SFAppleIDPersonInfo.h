@class NSString, NSDate;

@interface SFAppleIDPersonInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *validUntilDate;
@property (readonly, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) NSString *altDSID;
@property (readonly, nonatomic) long long certificateStatus;
@property (readonly, nonatomic) BOOL didMatchEmail;
@property (readonly, nonatomic) BOOL didMatchPhone;
@property (readonly, nonatomic) BOOL isStale;
@property (readonly, nonatomic) NSString *matchedValue;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqualToPersonInfo:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
