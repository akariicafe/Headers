@class RTIInputSystemSourceSession, _TVRXKeyboardController, _TVRCRPCompanionLinkClientWrapper, NSString, TVRCKeyboardAttributes;

@interface _TVRCRapportRemoteTextInputKeyboardImpl : NSObject <RTIInputSystemSessionDelegate, RTIInputSystemPayloadDelegate, _TVRXKeyboardImpl>

@property (nonatomic) BOOL editing;
@property (retain, nonatomic) RTIInputSystemSourceSession *currentSession;
@property (retain, nonatomic) TVRCKeyboardAttributes *currentAttributes;
@property (weak, nonatomic) _TVRXKeyboardController *keyboardController;
@property (retain, nonatomic) _TVRCRPCompanionLinkClientWrapper *companionLinkWrapper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEditing;
- (void).cxx_destruct;
- (id)text;
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

@end
