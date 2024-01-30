@class NSArray, NSDictionary, CHDrawing;

@interface CHStrokeGroupRecognitionResult : NSObject <NSCopying, NSSecureCoding> {
    CHDrawing *_inputDrawing;
    NSArray *_inputDrawingCutPoints;
    NSDictionary *_languageFitnessByLocale;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) CHDrawing *inputDrawing;
@property (readonly, copy, nonatomic) NSArray *inputDrawingCutPoints;
@property (readonly, copy, nonatomic) NSDictionary *languageFitnessByLocale;
@property (readonly, copy, nonatomic) NSArray *inputStrokeIdentifiers;
@property (readonly, copy, nonatomic) NSDictionary *recognitionResultsByLocale;
@property (readonly, copy, nonatomic) NSDictionary *errorsByLocale;

+ (id)sortedLocales:(id)a0 usingLanguageFitness:(id)a1;
+ (id)filteredResultsByLocale:(id)a0 usingLanguageFitness:(id)a1;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)localesSortedByLanguageFitness:(id)a0;
- (id)highConfidenceTextForSessionResult:(id)a0 rejectionRate:(double *)a1 doesContainUnfilteredMultiLocaleResults:(BOOL *)a2;
- (double)languageFitnessForLocale:(id)a0;
- (id)initWithResultsByLocale:(id)a0 errorsByLocale:(id)a1 languageFitnessByLocale:(id)a2 inputStrokeIdentifiers:(id)a3 inputDrawing:(id)a4 inputDrawingCutPoints:(id)a5;
- (id)initWithResultsByLocale:(id)a0 errorsByLocale:(id)a1 languageFitnessByLocale:(id)a2 inputStrokeIdentifiers:(id)a3;
- (BOOL)isEqualToStrokeGroupRecognitionResult:(id)a0;

@end
