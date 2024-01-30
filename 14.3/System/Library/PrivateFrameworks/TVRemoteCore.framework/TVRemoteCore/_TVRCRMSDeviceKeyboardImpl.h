@class _TVRXKeyboardController, NSString, TVRMSKeyboardInfo;
@protocol _TVRCRMSDeviceKeyboardImplDelegate;

@interface _TVRCRMSDeviceKeyboardImpl : NSObject <_TVRXKeyboardImpl>

@property (nonatomic) BOOL editing;
@property (retain, nonatomic) TVRMSKeyboardInfo *keyboardInfo;
@property (weak, nonatomic) _TVRXKeyboardController *keyboardController;
@property (weak, nonatomic) id<_TVRCRMSDeviceKeyboardImplDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEditing;
- (void).cxx_destruct;
- (id)text;
- (id)attributes;
- (void)setText:(id)a0;
- (void)keyboardSessionBegan:(id)a0;
- (void)keyboardSessionEnded:(id)a0;
- (void)keyboardSessionUpdatedEditingInfo:(id)a0;
- (id)_attributesForKeyboardInfo:(id)a0;
- (long long)_keyboardTypeForInfo:(id)a0;
- (void)sendReturnKey;

@end
