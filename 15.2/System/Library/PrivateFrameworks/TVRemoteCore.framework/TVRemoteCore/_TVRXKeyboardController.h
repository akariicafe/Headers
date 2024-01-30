@class NSString, TVRCKeyboardAttributes;
@protocol _TVRXKeyboardImpl, _TVRXKeyboardControllerDelegate;

@interface _TVRXKeyboardController : NSObject

@property (retain, nonatomic, getter=_impl, setter=_setImpl:) id<_TVRXKeyboardImpl> impl;
@property (weak, nonatomic) id<_TVRXKeyboardControllerDelegate> delegate;
@property (readonly, nonatomic, getter=isEditing) BOOL editing;
@property (readonly, nonatomic) TVRCKeyboardAttributes *attributes;
@property (copy, nonatomic) NSString *text;

- (void)_endSession;
- (void).cxx_destruct;
- (id)_init;
- (void)_editingSessionBeganWithAttributes:(id)a0;
- (void)_editingSessionUpdatedText:(id)a0;
- (void)_editingSessionEnded;
- (void)_editingSessionUpdatedAttributes:(id)a0;
- (void)sendReturnKey;
- (void)_beginSessionWithAttributes:(id)a0;
- (void)sendTextActionPayload:(id)a0;
- (void)_textActionPayloadGenerated:(id)a0;

@end
