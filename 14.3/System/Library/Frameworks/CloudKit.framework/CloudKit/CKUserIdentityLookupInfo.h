@class NSString, CKRecordID, NSData;

@interface CKUserIdentityLookupInfo : NSObject <CKXPCSuitableString, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *emailAddress;
@property (copy, nonatomic) CKRecordID *userRecordID;
@property (copy, nonatomic) NSString *phoneNumber;
@property (nonatomic) BOOL shouldReportMissingIdentity;
@property (retain, nonatomic) NSData *encryptedPersonalInfo;

+ (id)lookupInfosWithEmails:(id)a0;
+ (id)lookupInfosWithPhoneNumbers:(id)a0;
+ (id)lookupInfosWithRecordIDs:(id)a0;

- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (id)CKPropertiesDescription;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEmailAddress:(id)a0;
- (id)ckShortDescription;
- (long long)lookupField;
- (void)_stripPersonalInfo;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithPhoneNumber:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)CKXPCSuitableString;
- (id)lookupValue;
- (id)initWithUserRecordID:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
