@class NSArray, NSString, AVTAvatarColorVariationStore, AVTAvatarAttributeEditorSectionOptions;
@protocol AVTAvatarAttributeEditorSectionSupplementalPicker;

@interface AVTAvatarAttributeEditorColorSection : NSObject <AVTAvatarAttributeEditorColorSection>

@property (readonly, copy, nonatomic) NSArray *primaryItems;
@property (readonly, copy, nonatomic) NSArray *extendedItems;
@property (readonly, nonatomic) BOOL alwaysShowExtended;
@property (readonly, nonatomic) AVTAvatarColorVariationStore *colorVariationStore;
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
- (id)initWithPrimaryItems:(id)a0 extendedItems:(id)a1 colorVariationStore:(id)a2 localizedName:(id)a3 identifier:(id)a4 alwaysShowExtended:(BOOL)a5 options:(id)a6;
- (BOOL)shouldDisplayTitle;

@end
