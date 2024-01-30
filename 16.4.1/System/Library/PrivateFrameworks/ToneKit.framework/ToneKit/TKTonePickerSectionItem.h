@class NSString, TKTonePickerController;

@interface TKTonePickerSectionItem : TKPickerSectionItem <TKPickerContainerItem>

@property (weak, nonatomic, setter=_setParentTonePickerController:) TKTonePickerController *_parentTonePickerController;
@property (nonatomic, setter=_setNumberOfChildren:) long long numberOfChildren;
@property (nonatomic, setter=_setSectionHeader:) unsigned long long sectionHeader;
@property (nonatomic, setter=_setRegularToneSectionIndex:) unsigned long long regularToneSectionIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_appendDescriptionOfAttributesToString:(id)a0;
- (id)childItemAtIndex:(long long)a0;

@end
