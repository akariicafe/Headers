@class RTIInputSystemSourceSession, _TVRXKeyboardController, _TVRCMRTelevisionWrapper, NSString, NSDate, TVRCKeyboardAttributes;

@interface _TVRCMediaRemoteRemoteTextInputKeyboardImpl : NSObject <RTIInputSystemSessionDelegate, RTIInputSystemPayloadDelegate, _TVRXKeyboardImpl>

@property (nonatomic) BOOL editing;
@property (retain, nonatomic) RTIInputSystemSourceSession *currentSession;
@property (retain, nonatomic) TVRCKeyboardAttributes *currentAttributes;
@property (retain, nonatomic) NSDate *lastSessionTimestamp;
@property (weak, nonatomic) _TVRXKeyboardController *keyboardController;
@property (retain, nonatomic) _TVRCMRTelevisionWrapper *television;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEditing;
- (void).cxx_destruct;
- (id)text;
- (void)dealloc;
- (id)attributes;
- (void)inputSessionDidBegin:(id)a0;
- (void)inputSessionDidDie:(id)a0;
- (void)inputSessionDidEnd:(id)a0;
- (void)handleTextActionPayload:(id)a0;
- (void)setText:(id)a0;
- (void)sendReturnKey;
- (void)setTextActionPayload:(id)a0;
- (void)_stopObservingTelevisionEditingSession;
- (void)_receivedInputSourceSession:(id)a0;
- (BOOL)_shouldAllowSourceSession;

@end
