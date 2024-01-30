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

- (void)handleTextActionPayload:(id)a0;
- (void)setText:(id)a0;
- (void)inputSessionDidDie:(id)a0;
- (void).cxx_destruct;
- (id)text;
- (BOOL)isEditing;
- (void)inputSessionDidBegin:(id)a0;
- (id)attributes;
- (void)inputSessionDidEnd:(id)a0;
- (void)sendReturnKey;
- (void)setTextActionPayload:(id)a0;
- (void)_stopObservingTelevisionEditingSession;
- (void)_receivedInputSourceSession:(id)a0;

@end
