@class NSString, NSArray, NSData, NSDate, NSNumber;

@interface SFAppleIDValidationRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *altDSID;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL isInvalid;
@property (readonly, nonatomic) BOOL needsUpdate;
@property (retain, nonatomic) NSDate *nextCheckDate;
@property (nonatomic) unsigned long long suggestedValidDuration;
@property (retain, nonatomic) NSArray *validatedEmailHashes;
@property (retain, nonatomic) NSArray *validatedPhoneHashes;
@property (retain, nonatomic) NSDate *validStartDate;
@property (retain, nonatomic) NSNumber *version;

- (void)encodeWithCoder:(id)a0;
- (id)expirationDate;
- (BOOL)isEqualToValidationRecord:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
