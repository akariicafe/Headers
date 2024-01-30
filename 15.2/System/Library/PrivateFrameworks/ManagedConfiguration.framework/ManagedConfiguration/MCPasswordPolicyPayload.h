@class NSNumber;

@interface MCPasswordPolicyPayload : MCPayload

@property (readonly, retain, nonatomic) NSNumber *isSimplePasscodeAllowed;
@property (readonly, retain, nonatomic) NSNumber *isPasscodeRequired;
@property (readonly, retain, nonatomic) NSNumber *isAlphanumericPasscodeRequired;
@property (readonly, retain, nonatomic) NSNumber *isManualFetchingWhenRoaming;
@property (readonly, retain, nonatomic) NSNumber *minLength;
@property (readonly, retain, nonatomic) NSNumber *maxFailedAttempts;
@property (readonly, retain, nonatomic) NSNumber *maxGracePeriodMinutes;
@property (readonly, retain, nonatomic) NSNumber *maxInactivityMinutes;
@property (readonly, retain, nonatomic) NSNumber *maxPasscodeAgeDays;
@property (readonly, retain, nonatomic) NSNumber *passcodeHistoryCount;
@property (readonly, retain, nonatomic) NSNumber *minComplexCharacters;

+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;

- (id)restrictions;
- (id)title;
- (id)stubDictionary;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle1Description;
- (id)filterForUserEnrollmentOutError:(id *)a0;
- (void).cxx_destruct;
- (id)verboseDescription;

@end
