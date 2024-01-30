@class NSString, NSArray, PKPassField, NSDate, NSMutableDictionary;

@interface PKTransitCommutePlan : NSObject <NSSecureCoding, NSCopying> {
    NSMutableDictionary *_fieldsByKey;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSArray *deviceAccountIdentifiers;
@property (copy, nonatomic) PKPassField *title;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSArray *details;
@property (nonatomic) unsigned long long properties;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *expiryDate;
@property (copy, nonatomic) NSString *startDateString;
@property (copy, nonatomic) NSString *expiryDateString;
@property (copy, nonatomic) PKPassField *usage;
@property (nonatomic) BOOL requiresAppletSourceOfTruth;
@property (readonly, copy, nonatomic) NSString *formattedDateString;
@property (readonly, nonatomic) BOOL hasExpiredPlanDate;
@property (readonly, nonatomic) BOOL isPlanAvailable;
@property (readonly, nonatomic) BOOL isPlanDisplayable;
@property (readonly, nonatomic) BOOL hasDisplayableInformation;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)_expiryField;
- (id)_startField;
- (void)_updateFieldsByKey;
- (void)_updateProperties;
- (id)passFieldForKey:(id)a0;

@end
