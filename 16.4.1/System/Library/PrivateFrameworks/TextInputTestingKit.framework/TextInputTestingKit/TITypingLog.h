@class NSMutableDictionary, NSMutableArray, TIKeystrokeRecord;

@interface TITypingLog : NSObject {
    NSMutableDictionary *_pathsForTokens;
    NSMutableArray *_correctedTransliterationForTokens;
    NSMutableArray *_intendedTransliterationForTokens;
    BOOL _isTransliterating;
    NSMutableDictionary *_debugData;
}

@property (retain, nonatomic) NSMutableArray *currentKeystrokeSequence;
@property (retain, nonatomic) TIKeystrokeRecord *currentKeystroke;
@property (readonly, nonatomic) NSMutableArray *keystrokesForTokens;

+ (id)emptyTouchEventForLogging;
+ (id)typingLog;
+ (id)typingLogWithDebug:(BOOL)a0;

- (BOOL)isDebugEnabled;
- (id)init;
- (void).cxx_destruct;
- (void)setTokenIndex:(unsigned long long)a0;
- (void)beginToken;
- (id)getDebugObject:(id)a0;
- (id)intendedTransliterationSequence;
- (void)addDebugObject:(id)a0 forKey:(id)a1;
- (BOOL)adjustForContinuousPath;
- (void)beginKeystrokeWithIntendedKey:(id)a0 touchEvent:(id)a1 touchError:(id)a2;
- (void)beginKeystrokeWithIntendedKey:(id)a0 touchEvent:(id)a1 touchError:(id)a2 documentBefore:(id)a3;
- (id)correctedTransliterationSequence;
- (void)enumerateKeystrokesAndPathsForTokensWithBlock:(id /* block */)a0;
- (void)finishKeystrokeWithTouchedKey:(id)a0 touchEvent:(id)a1 insertedKey:(id)a2;
- (void)finishKeystrokeWithTouchedKey:(id)a0 touchEvent:(id)a1 insertedKey:(id)a2 predictionBarState:(id)a3;
- (id)getDebugData;
- (id)initWithDebug:(BOOL)a0;
- (void)logAcceptedCandidate:(id)a0;
- (void)logAcceptedCandidate:(id)a0 intendedTransliterationCandidate:(id)a1;
- (void)logRejectedAutocorrection;
- (void)registerPathStringAsKeyStrokes:(id)a0 path:(id)a1 predictionBarState:(id)a2;
- (void)revisitPreviousToken;

@end
