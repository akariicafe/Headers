@class NSString, NSArray, UnitInfo;

@interface UnitTypeInfo : NSObject

@property (nonatomic) int unitType;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL isDecomposable;
@property (nonatomic) struct { unsigned long long w[2]; } decompositionCoefficient;
@property (nonatomic) struct UnitCounts { struct UnitCount { int unitID; int exponent; } types[16]; } decomposition;
@property (retain, nonatomic) NSArray *units;
@property (weak, nonatomic) UnitInfo *baseUnit;
@property (nonatomic) BOOL isTemperature;
@property (nonatomic) BOOL isCurrency;
@property (nonatomic) BOOL isVolume;

- (void).cxx_destruct;

@end
