@class NSArray, NSString;

@interface AVTAvatarAttributeEditorSectionSupplementalPicker : NSObject <AVTAvatarAttributeEditorSectionSupplementalPicker>

@property (readonly, copy, nonatomic) NSArray *choices;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pickerForMulticolorPicker:(id)a0 isMultipleSelected:(BOOL)a1 switchToSingleColorAvatarUpdater:(id /* block */)a2 switchToMultipleColorAvatarUpdater:(id /* block */)a3;
+ (id)pickerForPairableModelCategory:(id)a0 isPaired:(BOOL)a1 avatarUpdaterOnPair:(id /* block */)a2;
+ (id)pickerFromEditorSection:(id)a0;

- (void).cxx_destruct;
- (id)initWithLocalizedTitle:(id)a0 choices:(id)a1;
- (id)copyWithLocalizedTitle:(id)a0;

@end
