@class TIKeyboardState, TIKeyboardTouchEvent, TIKeyboardInput, NSString, NSDate, NSMutableDictionary, NSLocale, NSMutableArray, TIWordEntry;
@protocol TITypingSessionDelegate;

@interface TITypingSession : NSObject <NSSecureCoding, TIKeyboardInteractionProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableArray *userActionHistory;
@property (retain, nonatomic) TIWordEntry *currentWord;
@property (retain, nonatomic) TIKeyboardInput *lastInput;
@property (retain, nonatomic) NSMutableArray *layouts;
@property (retain, nonatomic) TIKeyboardState *savedDeleteInputKeyboardState;
@property (nonatomic) unsigned long long currentLayoutID;
@property (retain, nonatomic) NSLocale *locale;
@property (retain, nonatomic) TIWordEntry *lastWord;
@property (nonatomic) BOOL includeInputToLastWord;
@property (retain) TIKeyboardTouchEvent *timeCalibrationTouch;
@property double calibratedTimeBase;
@property (nonatomic) BOOL didReceiveSecureFieldEvent;
@property (retain, nonatomic) NSMutableDictionary *touchesHistory;
@property (nonatomic) long long lastActivePathIndex;
@property (copy, nonatomic) NSString *layoutName;
@property (copy, nonatomic) NSString *startContext;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *endTime;
@property (copy, nonatomic) NSString *applicationID;
@property (weak, nonatomic) id<TITypingSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isCurrentWordEmpty;
- (double)calibratedCurrentTimestamp;
- (void)setClientID:(id)a0 keyboardState:(id)a1;
- (BOOL)testForRapidDeleteContextChange:(id)a0;
- (void)addTouchEvent:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)candidateAccepted:(id)a0 withInput:(id)a1 documentState:(id)a2 inputContext:(id)a3 inputStem:(id)a4 predictionBarHit:(BOOL)a5 useCandidateSelection:(BOOL)a6 candidateIndex:(long long)a7 keyboardState:(id)a8;
- (void)addKeyInput:(id)a0 keyboardState:(id)a1;
- (void)layoutDidChange:(id)a0 keyboardState:(id)a1;
- (void)candidatesOffered:(id)a0 keyboardState:(id)a1;
- (id)initWithLocale:(id)a0 keyboardLayout:(id)a1;
- (void)contextDidChange:(id)a0 wordDelete:(BOOL)a1 cursorMoved:(BOOL)a2 extendsPriorWord:(BOOL)a3 inWord:(id)a4 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5 selectionLocation:(unsigned long long)a6 keyboardState:(id)a7;
- (void)addDrawInputWithSyllableCount:(unsigned long long)a0 keyboardState:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
