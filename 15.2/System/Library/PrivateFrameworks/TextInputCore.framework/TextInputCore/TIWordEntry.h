@class TIUserAction, NSString, TIKeyboardCandidate, NSArray, TIKeyboardInput, NSMutableArray;

@interface TIWordEntry : TIUserAction

@property (retain, nonatomic) NSMutableArray *allKeyboardInputsM;
@property (retain, nonatomic) NSMutableArray *allTouchesM;
@property (retain, nonatomic) NSMutableArray *candidatesOfferedM;
@property (retain, nonatomic) NSMutableArray *touchLayoutsM;
@property (retain, nonatomic) TIKeyboardCandidate *acceptedCandidate;
@property (retain, nonatomic) TIKeyboardCandidate *originalCandidate;
@property (copy, nonatomic) NSString *inputStem;
@property (copy, nonatomic) NSString *inputContext;
@property (nonatomic) BOOL followsContinuousPath;
@property (nonatomic) int unfinishedWordEntryTreatment;
@property (readonly, nonatomic) TIWordEntry *editedEntry;
@property (retain, nonatomic) TIUserAction *editAction;
@property (retain, nonatomic) NSMutableArray *allEdits;
@property (nonatomic) unsigned long long sessionIndex;
@property (nonatomic) unsigned long long alignmentConflicts;
@property long long layoutID;
@property long long candidateIndex;
@property (retain, nonatomic) TIKeyboardInput *inputTriggeredTextAccepted;
@property (nonatomic) BOOL isPunctuationEntryFollowingAWord;
@property (readonly, nonatomic) NSArray *allKeyboardInputs;
@property (readonly, nonatomic) NSArray *allTouches;
@property (readonly, nonatomic) NSArray *candidatesOffered;
@property (readonly, nonatomic) NSArray *touchLayouts;
@property (copy, nonatomic) NSString *acceptedString;
@property (copy, nonatomic) NSString *originalAcceptedString;
@property (copy, nonatomic) NSString *orientation;
@property (nonatomic) int wordEntryType;
@property (nonatomic) BOOL extendsPriorWord;
@property (nonatomic) BOOL includesCursorEdits;
@property (nonatomic) BOOL includesOrientationChange;
@property (nonatomic) BOOL isRetrocorrection;
@property (nonatomic) BOOL isMultilingual;
@property (nonatomic) BOOL isOOV;
@property (nonatomic) BOOL isFromStaticLexicon;
@property (nonatomic) BOOL isContinuousPathCompletion;
@property (nonatomic) BOOL candidateContainsEmoji;
@property (nonatomic) int wordAlignmentConf;
@property (nonatomic) int touchAlignmentConf;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)documentContextBeforeInput;
- (void)clearTouches;
- (id)trimmedDocumentContextBeforeInput;
- (id)descriptionWithContext;
- (void)addKeyInput:(id)a0;
- (void)clearKeyInputs;
- (void)addCandidateOffered:(id)a0;
- (void)clearCandidatesOffered;
- (void)addTouchEvent:(id)a0 withLayoutId:(unsigned long long)a1;
- (BOOL)startsWithNewLine;
- (BOOL)endsWithNewLine;
- (BOOL)isPeriodFromDoubleSpaceEntry;
- (void)addUserEdit:(id)a0;

@end
