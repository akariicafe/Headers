@class NSString, NSArray, AVTAvatarAttributeEditorSectionOptions;
@protocol AVTAvatarAttributeEditorSectionSupplementalPicker;

@interface AVTAvatarAttributeEditorSection : NSObject <AVTAvatarAttributeEditorSection>

@property (nonatomic) BOOL shouldDisplayInsetSeparatorAfterSection;
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
- (id)initWithSectionItems:(id)a0 localizedName:(id)a1 identifier:(id)a2 intendedDestination:(unsigned long long)a3 options:(id)a4;
- (BOOL)shouldDisplaySeparatorBeforeSection:(id)a0;

@end
