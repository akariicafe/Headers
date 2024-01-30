@class NSArray, NSUUID, NSString, NSDate, HKProfileIdentifier;

@interface HKSummarySharingEntry : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *allContactIdentifiers;
@property (readonly, copy, nonatomic) NSUUID *UUID;
@property (readonly, copy, nonatomic) NSString *CNContactIdentifier;
@property (readonly, copy, nonatomic) NSString *primaryContactIdentifier;
@property (readonly, copy, nonatomic) NSString *firstName;
@property (readonly, copy, nonatomic) NSString *lastName;
@property (readonly, nonatomic) long long userWheelchairMode;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) unsigned long long direction;
@property (readonly, nonatomic) long long notificationStatus;
@property (readonly, copy, nonatomic) NSDate *modificationDate;
@property (readonly, copy, nonatomic) NSDate *dateInvited;
@property (readonly, copy, nonatomic) NSDate *dateAccepted;
@property (readonly, copy, nonatomic) HKProfileIdentifier *profileIdentifier;

- (id)_initWithUUID:(id)a0 primaryContactIdentifier:(id)a1 allContactIdentifiers:(id)a2 firstName:(id)a3 lastName:(id)a4 userWheelchairMode:(long long)a5 type:(long long)a6 status:(long long)a7 notificationStatus:(long long)a8 direction:(unsigned long long)a9 modificationDate:(id)a10 dateAccepted:(id)a11 profileIdentifier:(id)a12 CNContactIdentifier:(id)a13;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithUUID:(id)a0 primaryContactIdentifier:(id)a1 allContactIdentifiers:(id)a2 firstName:(id)a3 lastName:(id)a4 userWheelchairMode:(long long)a5 type:(long long)a6 status:(long long)a7 notificationStatus:(long long)a8 direction:(unsigned long long)a9 modificationDate:(id)a10;
- (void)_setCNContactIdentifier:(id)a0;
- (void)_setDateAccepted:(id)a0;
- (id)initWithUUID:(id)a0 primaryContactIdentifier:(id)a1 allContactIdentifiers:(id)a2 firstName:(id)a3 lastName:(id)a4 type:(long long)a5 status:(long long)a6 notificationStatus:(long long)a7 direction:(unsigned long long)a8 modificationDate:(id)a9;
- (void)_setProfileIdentifier:(id)a0;

@end
