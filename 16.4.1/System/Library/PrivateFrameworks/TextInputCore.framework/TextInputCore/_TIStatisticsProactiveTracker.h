@class TIKeyboardCandidate, PETScalarEventTracker, PETDistributionEventTracker, TIAutocorrectionList;

@interface _TIStatisticsProactiveTracker : NSObject

@property (retain, nonatomic) PETScalarEventTracker *failureEventDescriptionTracker;
@property (retain, nonatomic) PETScalarEventTracker *triggeredEventTracker;
@property (retain, nonatomic) PETScalarEventTracker *triggeredCategoryEventTracker;
@property (retain, nonatomic) PETScalarEventTracker *suggestedEventTracker;
@property (retain, nonatomic) PETScalarEventTracker *suggestedCategoryEventTracker;
@property (retain, nonatomic) PETScalarEventTracker *failureEventTracker;
@property (retain, nonatomic) PETScalarEventTracker *failureCategoryEventTracker;
@property (retain, nonatomic) PETScalarEventTracker *failureCategoryEventDescriptionTracker;
@property (retain, nonatomic) PETScalarEventTracker *selectedEventTracker;
@property (retain, nonatomic) PETScalarEventTracker *selectedCategoryEventTracker;
@property (retain, nonatomic) PETDistributionEventTracker *timeInPredictionBarEventTracker;
@property (retain, nonatomic) PETDistributionEventTracker *timeInPredictionBarCategoryEventTracker;
@property (retain, nonatomic) PETScalarEventTracker *engagementEventDescriptionTracker;
@property (retain, nonatomic) PETScalarEventTracker *engagementCategoryEventDescriptionTracker;
@property (retain, nonatomic) PETScalarEventTracker *personalizationWordAcceptanceTracker;
@property (retain, nonatomic) PETScalarEventTracker *personalizationOfferTracker;
@property (retain, nonatomic) PETScalarEventTracker *personalizationEngagementTracker;
@property (retain, nonatomic) TIAutocorrectionList *lastAutocorrectionList;
@property (retain, nonatomic) TIKeyboardCandidate *responseKitEntryOffered;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)trackEngagementFailureWithDescription:(unsigned char)a0 description:(id)a1 categories:(id)a2 locale:(id)a3 fieldType:(id)a4;
- (void)trackFailureWithDescription:(unsigned char)a0 description:(id)a1 categories:(id)a2 locale:(id)a3 fieldType:(id)a4;
- (void)trackFailureWithSource:(unsigned char)a0 reason:(unsigned char)a1 categories:(id)a2 locale:(id)a3 fieldType:(id)a4;
- (void)trackPredictionTimeWithSource:(unsigned char)a0 time:(double)a1 selected:(BOOL)a2 categories:(id)a3 locale:(id)a4 fieldType:(id)a5;
- (void)trackSelectedWithSource:(unsigned char)a0 position:(unsigned long long)a1 categories:(id)a2 locale:(id)a3 fieldType:(id)a4;
- (void)trackSuggestedWithSource:(unsigned char)a0 count:(unsigned long long)a1 categories:(id)a2 locale:(id)a3 fieldType:(id)a4;
- (void)trackTriggeredWithSource:(unsigned char)a0 categories:(id)a1 locale:(id)a2 fieldType:(id)a3;

@end
