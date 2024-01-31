@class NSString, CKRecordID, NSData, CKRoughlyEquivalentProperties;

@interface CKUserIdentityLookupInfo : NSObject <CKXPCSuitableString, CKRoughlyEquivalent, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *emailAddress;
@property (copy) CKRecordID *userRecordID;
@property (copy) NSString *phoneNumber;
@property BOOL shouldReportMissingIdentity;
@property (copy) NSData *encryptedPersonalInfo;
@property (readonly, nonatomic) CKRoughlyEquivalentProperties *equivalencyProperties;

+ (id)lookupInfosWithEmails:(id)a0;
+ (void)initialize;
+ (id)lookupInfosWithRecordIDs:(id)a0;
+ (id)lookupInfosWithPhoneNumbers:(id)a0;

- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (unsigned long long)hash;
- (id)initInternal;
- (void)encodeWithCoder:(id)a0;
- (id)CKPropertiesDescription;
- (id)ckShortDescription;
- (id)initWithEmailAddress:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)CKXPCSuitableString;
- (void)_stripPersonalInfo;
- (id)initWithPhoneNumber:(id)a0;
- (id)initWithUserRecordID:(id)a0;
- (long long)lookupField;
- (id)lookupValue;

@end
