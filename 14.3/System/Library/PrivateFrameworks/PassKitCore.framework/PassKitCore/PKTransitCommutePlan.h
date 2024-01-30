@class NSString, NSArray, PKPassField, NSDate, NSMutableDictionary;

@interface PKTransitCommutePlan : NSObject <NSSecureCoding, NSCopying> {
    NSMutableDictionary *_fieldsByKey;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSArray *deviceAccountIdentifiers;
@property (copy, nonatomic) PKPassField *title;
@property (copy, nonatomic) NSArray *details;
@property (nonatomic) unsigned long long properties;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *expiryDate;
@property (copy, nonatomic) NSString *startDateString;
@property (copy, nonatomic) NSString *expiryDateString;
@property (copy, nonatomic) PKPassField *usage;
@property (readonly, nonatomic) BOOL isPlanAvailable;
@property (readonly, nonatomic) BOOL isPlanDisplayable;
@property (readonly, nonatomic) BOOL hasDisplayableInformation;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_updateFieldsByKey;
- (id)_expiryField;
- (void)_updateProperties;
- (unsigned long long)hash;
- (id)_startField;
- (id)initWithCoder:(id)a0;
- (id)passFieldForKey:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
