@class TSXgPTPLocalClockPort;

@interface TSgPTPLocalClockPort : TSgPTPPort {
    TSXgPTPLocalClockPort *_implXPC;
}

@property (readonly, nonatomic) unsigned char localOscillatorType;
@property (readonly, nonatomic) BOOL hasLocalFrequencyToleranceLower;
@property (readonly, nonatomic) int localFrequencyToleranceLower;
@property (readonly, nonatomic) BOOL hasLocalFrequencyToleranceUpper;
@property (readonly, nonatomic) int localFrequencyToleranceUpper;
@property (readonly, nonatomic) BOOL hasLocalFrequencyStabilityLower;
@property (readonly, nonatomic) int localFrequencyStabilityLower;
@property (readonly, nonatomic) BOOL hasLocalFrequencyStabilityUpper;
@property (readonly, nonatomic) int localFrequencyStabilityUpper;

+ (id)diagnosticDescriptionForInfo:(id)a0 withIndent:(id)a1;
+ (id)keyPathsForValuesAffectingHasLocalFrequencyStabilityLower;
+ (id)keyPathsForValuesAffectingHasLocalFrequencyStabilityUpper;
+ (id)keyPathsForValuesAffectingHasLocalFrequencyToleranceLower;
+ (id)keyPathsForValuesAffectingHasLocalFrequencyToleranceUpper;
+ (id)keyPathsForValuesAffectingLocalFrequencyStabilityLower;
+ (id)keyPathsForValuesAffectingLocalFrequencyStabilityUpper;
+ (id)keyPathsForValuesAffectingLocalFrequencyToleranceLower;
+ (id)keyPathsForValuesAffectingLocalFrequencyToleranceUpper;
+ (id)keyPathsForValuesAffectingLocalOscillatorType;

- (void).cxx_destruct;
- (BOOL)hasLocalFrequencyStabilityLower;
- (BOOL)hasLocalFrequencyToleranceLower;
- (BOOL)hasLocalFrequencyStabilityUpper;
- (BOOL)hasLocalFrequencyToleranceUpper;
- (id)initWithImplXPC:(id)a0;
- (int)localFrequencyStabilityLower;
- (int)localFrequencyStabilityUpper;
- (int)localFrequencyToleranceLower;
- (int)localFrequencyToleranceUpper;
- (unsigned char)localOscillatorType;

@end
