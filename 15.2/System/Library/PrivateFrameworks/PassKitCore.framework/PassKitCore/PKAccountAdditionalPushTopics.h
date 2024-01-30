@class NSString;

@interface PKAccountAdditionalPushTopics : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *account;
@property (copy, nonatomic) NSString *extendedAccount;
@property (copy, nonatomic) NSString *payments;
@property (copy, nonatomic) NSString *users;
@property (copy, nonatomic) NSString *sharedAccountCloudStore;
@property (copy, nonatomic) NSString *applications;
@property (copy, nonatomic) NSString *physicalCards;
@property (copy, nonatomic) NSString *servicingToken;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;

@end
