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
- (id)initWithUserRecordID:(id)a0;
- (void)_stripPersonalInfo;
- (id)initWithPhoneNumber:(id)a0;
- (id)CKPropertiesDescription;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (long long)lookupField;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)CKXPCSuitableString;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)ckShortDescription;
- (id)initWithEmailAddress:(id)a0;
- (unsigned long long)hash;
- (id)lookupValue;

@end
