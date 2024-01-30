@class NSString, NSMutableDictionary, NSArray, UnitTypeInfo, NSSet;

@interface UnitInfo : NSObject

@property (retain, nonatomic) NSMutableDictionary *localizationToCompactName;
@property (nonatomic) int unitID;
@property (nonatomic) int unitType;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) struct { unsigned long long w[2]; } baseNumerator;
@property (nonatomic) struct { unsigned long long w[2]; } baseDenominator;
@property (nonatomic) BOOL isInverted;
@property (nonatomic) BOOL isBaseUnit;
@property (nonatomic) BOOL isDisplayName;
@property (nonatomic) BOOL impliesDivision;
@property (nonatomic) BOOL isFahrenheit;
@property (nonatomic) BOOL isCelsius;
@property (nonatomic) BOOL isKelvin;
@property (weak, nonatomic) UnitTypeInfo *typeInfo;
@property (weak, nonatomic) UnitInfo *bestEquivalent;
@property (nonatomic) unsigned long long measurementSystem;
@property (nonatomic) BOOL doNotSuggest;
@property (weak, nonatomic) UnitInfo *nextSmallest;
@property (nonatomic) BOOL formatNextSmallest;
@property (retain, nonatomic) NSArray *subunitIDs;
@property (retain, nonatomic) NSSet *allSubunitIDs;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (long long)compare:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)compactNameForLocalization:(id)a0;

@end
