@class NSString, NSNumber;

@interface _HKEmergencyContact : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSNumber *nameRecordID;
@property (copy, nonatomic) NSString *nameContactIdentifier;
@property (copy, nonatomic) NSString *phoneNumber;
@property (retain, nonatomic) NSNumber *phoneNumberPropertyID;
@property (copy, nonatomic) NSString *phoneNumberContactIdentifier;
@property (copy, nonatomic) NSString *phoneNumberLabel;
@property (copy, nonatomic) NSString *relationship;

+ (id)emergencyContactWithContact:(id)a0 property:(id)a1;
+ (id)emergencyContactUsingSimCardNumberWithContact:(id)a0 property:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)isEqualToSyncedContact:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
