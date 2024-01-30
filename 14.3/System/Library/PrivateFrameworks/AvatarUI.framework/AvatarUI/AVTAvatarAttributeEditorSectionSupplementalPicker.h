@class NSArray, NSString;

@interface AVTAvatarAttributeEditorSectionSupplementalPicker : NSObject <AVTAvatarAttributeEditorSectionSupplementalPicker>

@property (readonly, copy, nonatomic) NSArray *choices;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) BOOL alwaysPresentAlert;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pickerFromEditorSection:(id)a0;
+ (id)pickerForPairableModelCategory:(id)a0 isPaired:(BOOL)a1 avatarUpdaterOnPair:(id /* block */)a2;

- (id)initWithLocalizedTitle:(id)a0 choices:(id)a1 alwaysPresentAlert:(BOOL)a2;
- (id)copyWithLocalizedTitle:(id)a0;
- (void).cxx_destruct;

@end
