@class NSString, NSArray;

@interface VSRecognitionRecognizeAction : VSRecognitionAction {
    NSString *_modelIdentifier;
    NSArray *_keywords;
    void *_recognition;
    NSArray *_results;
    NSString *_debugDumpPath;
    NSString *_audioInputPath;
    double _levelInterval;
    struct { unsigned char debugDumpEnabled : 1; unsigned char preferredEngine : 2; unsigned char resetEngine : 1; unsigned char bluetoothAllowed : 1; unsigned char hasStarted : 1; } _recognizeFlags;
}

- (void)_reset;
- (id)modelIdentifier;
- (void)_setResults:(id)a0;
- (id)_keywords;
- (id)perform;
- (void)dealloc;
- (id)cancel;
- (int)completionType;
- (void)_continueAfterDeferredStart;
- (BOOL)_hasDeferredStartCallback;
- (id)_debugDumpPath;
- (id)initWithModelIdentifier:(id)a0;
- (BOOL)_isRecognizing;
- (BOOL)_isActivelyRecognizing;
- (BOOL)_setBluetoothInputAllowed:(BOOL)a0;
- (BOOL)_setDebugDumpPath:(id)a0;
- (BOOL)_setDebugDumpEnabled:(BOOL)a0;
- (BOOL)_setPreferredEngine:(int)a0;
- (BOOL)_setAudioInputPath:(id)a0;
- (BOOL)_setInputLevelUpdateInterval:(double)a0;
- (BOOL)_setEngineResetRequired:(BOOL)a0;
- (void)_handledThreadedResults:(id)a0 nextAction:(id)a1;
- (float)_inputLevel;
- (float)_inputLevelDB;
- (id)_keywordAtIndex:(long long)a0;
- (long long)_keywordCount;
- (BOOL)_keywordIndexChanged;
- (struct __VSRecognition { } *)_createRecognitionInstanceWithCallbacks:(struct { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; } *)a0 info:(void *)a1;
- (id)_actionForEmptyResults;
- (BOOL)_setDebugDumpEnabled:(BOOL)a0 dumpPath:(id)a1;
- (void)_configureNewRecognitionInstance;
- (void)_releaseFromPrepare;
- (void)_handleRecognitionPrepared:(struct __VSRecognition { } *)a0;
- (void)_handleRecognitionStarted:(struct __VSRecognition { } *)a0;
- (void)_handleRecognitionCompleted:(struct __VSRecognition { } *)a0 withResults:(struct __CFArray { } *)a1 error:(struct __CFError { } *)a2;

@end
