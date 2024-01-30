@class NSString, NSArray, AVTAvatarAttributeEditorSectionOptions;
@protocol AVTAvatarAttributeEditorSectionSupplementalPicker;

@interface AVTAvatarAttributeEditorSection : NSObject <AVTAvatarAttributeEditorSection>

@property (copy, nonatomic) NSString *localizedName;
@property (readonly, copy, nonatomic) NSArray *sectionItems;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) AVTAvatarAttributeEditorSectionOptions *options;
@property (retain, nonatomic) id<AVTAvatarAttributeEditorSectionSupplementalPicker> supplementalPicker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)shouldDisplaySeparatorBeforeSection:(id)a0;
- (BOOL)shouldDisplayTitle;
- (id)initWithSectionItems:(id)a0 localizedName:(id)a1 identifier:(id)a2 options:(id)a3;

@end
