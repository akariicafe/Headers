@class NSArray, NSString;
@protocol GEOServerFormattedString;

@interface MNSpokenInstructionContents : MNListInstructionContents <MNInstructionContents> {
    struct { long long context; double distance; BOOL usePrimaryName; BOOL useSecondaryName; BOOL useDistanceForSecondary; BOOL useContinueForSecondary; int numPrimarySigns; int numSecondarySigns; } _options;
    BOOL _isSecondary;
}

@property (retain, nonatomic) id<GEOServerFormattedString> proceedInstructionFormat;
@property (retain, nonatomic) id<GEOServerFormattedString> continueInstructionFormat;
@property (retain, nonatomic) id<GEOServerFormattedString> initialInstructionFormat;
@property (retain, nonatomic) id<GEOServerFormattedString> prepareInstructionFormat;
@property (retain, nonatomic) NSArray *executionInstructionFormats;
@property (nonatomic) long long context;
@property (readonly, nonatomic) int numSignsWanted;
@property (nonatomic) BOOL suppressNames;
@property (retain, nonatomic) NSString *roadName;
@property (readonly, nonatomic) BOOL hasServerContent;
@property (nonatomic) BOOL suppressFallback;

+ (id)contentsWithStep:(id)a0 transportType:(int)a1 destination:(id)a2 options:(struct { long long x0; double x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; int x6; int x7; } *)a3 isSecondary:(BOOL)a4;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (void)_populateFromStep:(id)a0;
- (id)instructionForStage:(unsigned long long)a0 distance:(double)a1;
- (id)_instructionsForFormats:(id)a0 distance:(double)a1;
- (id)instructionWithShorterAlternatives:(id *)a0;

@end
