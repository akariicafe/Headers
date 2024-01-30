@class NSString, NSRegularExpression, UIImage, NSOperationQueue, SKUISettingValueStore;

@interface SKUIEditProfileSettingDescription : SKUISettingDescription <SKUIProfileImagePickerDelegate, SKUISuggestedHandlesSettingsHeaderFooterDescriptionDelegate> {
    id /* block */ _commitBlock;
    NSOperationQueue *_operationQueue;
    NSRegularExpression *_handleValidation;
    BOOL _suggestedHandlesDisplayed;
    SKUISettingValueStore *_valueStore;
}

@property (readonly, nonatomic, getter=isEditing) BOOL editing;
@property (copy, nonatomic) NSString *handle;
@property (readonly, nonatomic, getter=isHandleValid) BOOL handleValid;
@property (copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) UIImage *photo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)allowsEdit;
+ (Class)_viewClassForSettingDescription:(id)a0;

- (void).cxx_destruct;
- (void)_enterEditMode;
- (void)dealloc;
- (id)_valueStore;
- (void)_reloadData;
- (BOOL)allowsSelection;
- (void)_updateValidity;
- (void)beginEditing;
- (id)initWithViewElement:(id)a0 parent:(id)a1;
- (void)cancelEdits;
- (BOOL)commitEdits:(id /* block */)a0;
- (void)discardEdits;
- (void)_fetchAccountInfo;
- (void)_fetchProfilePhoto;
- (void)profileImagePicker:(id)a0 didPickProfileImage:(id)a1 withCropRect:(id)a2;
- (void)profileImagePickerDidCancel:(id)a0;
- (void)_authenticateOnCompletion:(id /* block */)a0;
- (void)suggestedHandlesSettingsHeaderFooterDescription:(id)a0 didSelectSuggestedHandle:(id)a1;
- (void)chooseNewProfilePhoto;
- (void)setPhoto:(id)a0 withCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_uploadProfileImage:(id)a0;
- (void)_updateAccountInfo;
- (void)_finalizeCommitWithSuccess:(BOOL)a0 error:(id)a1;
- (void)_leaveEditMode;
- (void)_displayFooter:(id)a0;
- (void)_displayRules:(BOOL)a0;
- (void)_displaySuggestedHandles:(id)a0;
- (void)_fetchSuggestedHandles;
- (void)_hideFooter;
- (BOOL)_validateName:(id)a0;
- (BOOL)_validateHandle:(id)a0;
- (void)_hideSuggestedHandles;

@end
