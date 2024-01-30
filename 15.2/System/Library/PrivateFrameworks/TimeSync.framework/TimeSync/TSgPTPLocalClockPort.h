@interface TSgPTPLocalClockPort : TSgPTPPort

@property (nonatomic) unsigned char localOscillatorType;
@property (nonatomic) BOOL hasLocalFrequencyToleranceLower;
@property (nonatomic) int localFrequencyToleranceLower;
@property (nonatomic) BOOL hasLocalFrequencyToleranceUpper;
@property (nonatomic) int localFrequencyToleranceUpper;
@property (nonatomic) BOOL hasLocalFrequencyStabilityLower;
@property (nonatomic) int localFrequencyStabilityLower;
@property (nonatomic) BOOL hasLocalFrequencyStabilityUpper;
@property (nonatomic) int localFrequencyStabilityUpper;

+ (id)diagnosticInfoForService:(id)a0;
+ (id)iokitMatchingDictionaryForClockIdentifier:(unsigned long long)a0;
+ (id)diagnosticDescriptionForService:(id)a0 withIndent:(id)a1;

- (int)portType;
- (id)initWithService:(id)a0;
- (int)_localFrequencyToleranceLower;
- (int)_localFrequencyStabilityUpper;
- (BOOL)_hasLocalFrequencyStabilityUpper;
- (id)initWithMatchingDictionary:(id)a0;
- (unsigned char)_localOscillatorType;
- (BOOL)_commonInitWithService:(id)a0;
- (int)_localFrequencyToleranceUpper;
- (int)_localFrequencyStabilityLower;
- (BOOL)_hasLocalFrequencyStabilityLower;
- (BOOL)_hasLocalFrequencyToleranceLower;
- (BOOL)_hasLocalFrequencyToleranceUpper;

@end
