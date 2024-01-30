@class NSString;

@interface SCROBrailleStealthDriver : NSObject <SCROBrailleDriverProtocol> {
    BOOL _isDriverLoaded;
    NSString *_modelIdentifier;
    long long _mainSize;
    long long _statusSize;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)modelIdentifier;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isInputEnabled;
- (unsigned long long)interfaceVersion;
- (int)loadDriverWithIOElement:(id)a0;
- (BOOL)unloadDriver;
- (BOOL)isDriverLoaded;
- (BOOL)isSleeping;
- (BOOL)supportsBlinkingCursor;
- (BOOL)postsKeyboardEvents;
- (int)brailleInputMode;
- (id)getInputEvents;
- (long long)mainSize;
- (long long)statusSize;
- (BOOL)setMainCells:(const char *)a0 length:(long long)a1;
- (BOOL)setStatusCells:(const char *)a0 length:(long long)a1;

@end
