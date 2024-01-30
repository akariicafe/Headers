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

- (id)modelIdentifier;
- (void)_reset;
- (id)perform;
- (id)cancel;
- (void)dealloc;
- (id)_keywords;
- (BOOL)_isRecognizing;
- (void)_setResults:(id)a0;
- (int)completionType;
- (id)initWithModelIdentifier:(id)a0;
- (id)_actionForEmptyResults;
- (void)_configureNewRecognitionInstance;
- (void)_continueAfterDeferredStart;
- (struct __VSRecognition { } *)_createRecognitionInstanceWithCallbacks:(struct { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; } *)a0 info:(void *)a1;
- (id)_debugDumpPath;
- (void)_handleRecognitionCompleted:(struct __VSRecognition { } *)a0 withResults:(struct __CFArray { } *)a1 error:(struct __CFError { } *)a2;
- (void)_handleRecognitionPrepared:(struct __VSRecognition { } *)a0;
- (void)_handleRecognitionStarted:(struct __VSRecognition { } *)a0;
- (void)_handledThreadedResults:(id)a0 nextAction:(id)a1;
- (BOOL)_hasDeferredStartCallback;
- (float)_inputLevel;
- (float)_inputLevelDB;
- (BOOL)_isActivelyRecognizing;
- (id)_keywordAtIndex:(long long)a0;
- (long long)_keywordCount;
- (BOOL)_keywordIndexChanged;
- (void)_releaseFromPrepare;
- (BOOL)_setAudioInputPath:(id)a0;
- (BOOL)_setBluetoothInputAllowed:(BOOL)a0;
- (BOOL)_setDebugDumpEnabled:(BOOL)a0;
- (BOOL)_setDebugDumpEnabled:(BOOL)a0 dumpPath:(id)a1;
- (BOOL)_setDebugDumpPath:(id)a0;
- (BOOL)_setEngineResetRequired:(BOOL)a0;
- (BOOL)_setInputLevelUpdateInterval:(double)a0;
- (BOOL)_setPreferredEngine:(int)a0;

@end
