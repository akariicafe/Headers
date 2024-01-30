@class DMFControlGroupIdentifier, NSString, CRKUser, NSDictionary, NSDate, NSSet;

@interface CRKCourse : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) DMFControlGroupIdentifier *courseIdentifier;
@property (copy, nonatomic) NSString *courseName;
@property (copy, nonatomic) NSString *courseDescription;
@property (nonatomic) unsigned long long courseMascotType;
@property (nonatomic) unsigned long long courseColorType;
@property (retain, nonatomic) CRKUser *courseUser;
@property (copy, nonatomic) NSDictionary *instructorsByIdentifier;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL mustRequestUnenroll;
@property (nonatomic, getter=isRequestingUnenroll) BOOL requestingUnenroll;
@property (retain, nonatomic) NSDate *automaticRemovalDate;
@property (nonatomic) BOOL studentCredentialsAreValid;
@property (retain, nonatomic) NSSet *trustedCertificatePersistentIds;
@property (retain, nonatomic) NSSet *validTrustedCertificatePersistentIds;
@property (readonly, nonatomic, getter=isManaged) BOOL managed;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly, nonatomic) BOOL allowsUnenroll;

+ (id)new;
+ (id)stringForType:(unsigned long long)a0;
+ (id)keyPathsForValuesAffectingExpired;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)setManaged:(BOOL)a0;
- (BOOL)isEqualToCourse:(id)a0;
- (id)initWithIdentifier:(id)a0 managed:(BOOL)a1;
- (BOOL)isDeeplyEqual:(id)a0;

@end
