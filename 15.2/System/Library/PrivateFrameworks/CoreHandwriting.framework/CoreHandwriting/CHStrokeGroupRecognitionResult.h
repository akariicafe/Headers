@class NSArray, NSDictionary, CHDrawing;

@interface CHStrokeGroupRecognitionResult : NSObject <NSCopying, NSSecureCoding> {
    CHDrawing *_inputDrawing;
    NSArray *_inputDrawingCutPoints;
    NSDictionary *_languageFitnessByLocale;
    NSArray *_orderedLocales;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) CHDrawing *inputDrawing;
@property (readonly, copy, nonatomic) NSArray *inputDrawingCutPoints;
@property (readonly, copy, nonatomic) NSDictionary *languageFitnessByLocale;
@property (readonly, copy, nonatomic) NSArray *inputStrokeIdentifiers;
@property (readonly, copy, nonatomic) NSDictionary *recognitionResultsByLocale;
@property (readonly, copy, nonatomic) NSDictionary *errorsByLocale;

+ (id)sortedLocales:(id)a0 usingLanguageFitness:(id)a1 useCombinedScore:(BOOL)a2;
+ (id)filteredResultsByLocale:(id)a0 orderedLocales:(id)a1 usingLanguageFitness:(id)a2 outSortedLocales:(id *)a3;
+ (id)localesByLanguageGroup:(id)a0;
+ (id)sortedLanguageGroups:(id)a0 usingLanguageFitness:(id)a1;
+ (id)filteredLocalesFromGroup:(id)a0 results:(id)a1 withCharacterFilterBlock:(id /* block */)a2;
+ (long long)indexOfFirstLocaleWithLanguage:(id)a0 orderedLocales:(id)a1;

- (id)preferredLocale;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)localesSortedByCombinedLanguageFitness:(id)a0;
- (id)highConfidenceTextForSessionResult:(id)a0 rejectionRate:(double *)a1 doesContainUnfilteredMultiLocaleResults:(BOOL *)a2;
- (struct { double x0; double x1; })languageFitnessForLocale:(id)a0;
- (id)initWithOrderedLocales:(id)a0 resultsByLocale:(id)a1 errorsByLocale:(id)a2 languageFitnessByLocale:(id)a3 inputStrokeIdentifiers:(id)a4 inputDrawing:(id)a5 inputDrawingCutPoints:(id)a6;
- (id)localesSortedByRawLanguageFitness:(id)a0;
- (id)initWithOrderedLocales:(id)a0 resultsByLocale:(id)a1 errorsByLocale:(id)a2 languageFitnessByLocale:(id)a3 inputStrokeIdentifiers:(id)a4;
- (BOOL)isEqualToStrokeGroupRecognitionResult:(id)a0;

@end
