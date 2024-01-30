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
@property (nonatomic) unsigned long long intendedDestination;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } separatorInsets;
@property (retain, nonatomic) id<AVTAvatarAttributeEditorSectionSupplementalPicker> supplementalPicker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *sections;

- (void).cxx_destruct;
- (BOOL)shouldDisplayTitle;
- (id)initWithPrimaryItems:(id)a0 extendedItems:(id)a1 colorVariationStore:(id)a2 localizedName:(id)a3 identifier:(id)a4 intendedDestination:(unsigned long long)a5 alwaysShowExtended:(BOOL)a6 options:(id)a7;
- (id)copyWithoutTitle;
- (BOOL)shouldDisplaySeparatorBeforeSection:(id)a0;

@end
