@class _TVRCMediaRemoteKeyboardAdapter, _TVRXKeyboardController, _TVRCMRTelevisionWrapper, NSString, TVRCKeyboardAttributes;

@interface _TVRCMediaRemoteLegacyKeyboardImpl : NSObject <_TVRCMediaRemoteKeyboardAdapterDelegate, _TVRXKeyboardImpl>

@property (nonatomic) BOOL editing;
@property (retain, nonatomic) TVRCKeyboardAttributes *currentAttributes;
@property (retain, nonatomic) _TVRCMediaRemoteKeyboardAdapter *adapter;
@property (weak, nonatomic) _TVRXKeyboardController *keyboardController;
@property (retain, nonatomic) _TVRCMRTelevisionWrapper *television;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEditing;
- (void).cxx_destruct;
- (id)text;
- (id)attributes;
- (void)setText:(id)a0;
- (void)sendReturnKey;
- (void)_textEditingHandlerUpdatedWithEvent:(unsigned int)a0 session:(id)a1;
- (void)_sessionDidBegin:(id)a0;
- (void)_sessionDidEnd:(id)a0;
- (void)_sessionTextDidChange:(id)a0;
- (void)_sessionAttributesDidChange:(id)a0;
- (void)keyboardAdapter:(id)a0 receivedUnexpectedTextUpdate:(id)a1;

@end
