@class NSArray, CHTextInputQuery, NSLocale;
@protocol CHRecognitionSessionTextInputTaskDelegate;

@interface CHRecognitionSessionTextInputTask : CHRecognitionSessionTask

@property (nonatomic) id<CHRecognitionSessionTextInputTaskDelegate> delegate;
@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, retain, nonatomic) NSArray *initialTextInputTargets;
@property (retain, nonatomic) CHTextInputQuery *activeTextInputQuery;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contextBoundsForTargetContentInfo:(id)a0;
+ (id)lastStrokeInGroup:(id)a0 strokeProvider:(id)a1;

- (void)dealloc;
- (id)clutterFilter;
- (id)_dataSource:(id)a0 inputTargetContentInfoForStrokeGroups:(id)a1 locale:(id)a2 groupingManager:(id)a3;
- (id)_textCorrectionResultForStrokeGroup:(id)a0 groupingManager:(id)a1 targetContentInfo:(id)a2 locale:(id)a3 previousCorrectionResult:(id)a4;
- (id)_dataSource:(id)a0 textInputTargetForStrokeGroup:(id)a1 simultaneousGroups:(id)a2;
- (id)initWithLocale:(id)a0 strokeProvider:(id)a1 initialTextInputTargets:(id)a2 inputResult:(id)a3 recognitionEnvironment:(long long)a4;
- (id)initWithLocales:(id)a0 preferredLocales:(id)a1 strokeProvider:(id)a2 inputResult:(id)a3 recognitionQOSClass:(unsigned int)a4;
- (id)recognitionResultsForGroupingResult:(id)a0 groupingManager:(id)a1;
- (id)textCorrectionResultsForGroupingResult:(id)a0 groupingManager:(id)a1;
- (id)newStrokeClassifier;
- (id)newGroupingManager;

@end
