@class CNSocialProfile, NSString;

@interface CNPropertySocialProfileEditingCell : CNPropertySimpleEditingCell <CNPickerControllerDelegate, UINavigationControllerDelegate>

@property (readonly, nonatomic) CNSocialProfile *profile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)labelButtonClicked:(id)a0;
- (void)picker:(id)a0 didPickItem:(id)a1;
- (void)pickerDidCancel:(id)a0;

@end
