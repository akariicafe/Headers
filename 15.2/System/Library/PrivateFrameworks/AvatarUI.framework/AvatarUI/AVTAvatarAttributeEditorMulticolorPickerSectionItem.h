@class NSString, AVTAvatarAttributeEditorSectionColorItem, AVTAvatarColorVariationStore;

@interface AVTAvatarAttributeEditorMulticolorPickerSectionItem : NSObject <AVTAvatarAttributeEditorSectionItem, AVTAvatarUpdating, AVTAvatarEditorStateUpdating>

@property (readonly, nonatomic) BOOL isPlaceholder;
@property (readonly, nonatomic) BOOL isRemovable;
@property (readonly, nonatomic) id /* block */ removalUpdater;
@property (readonly, nonatomic) AVTAvatarAttributeEditorSectionColorItem *colorItem;
@property (readonly, nonatomic) AVTAvatarColorVariationStore *variationStore;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) id /* block */ avatarUpdater;
@property (readonly, copy, nonatomic) id /* block */ editorStateUpdater;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 localizedName:(id)a1 isPlaceholder:(BOOL)a2 isRemovable:(BOOL)a3 colorItem:(id)a4 variationStore:(id)a5 avatarUpdater:(id /* block */)a6 editorStateUpdater:(id /* block */)a7 removalUpdater:(id /* block */)a8;

@end
