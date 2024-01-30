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

- (id)modelIdentifier;
- (BOOL)isInputEnabled;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
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
