@class NSArray;

@interface AVTAvatarAttributeEditorModel : NSObject

@property (readonly, nonatomic) NSArray *categories;

+ (id)diffOfSectionItems:(id)a0 fromSectionItems:(id)a1;
+ (id)diffOfSections:(id)a0 fromSections:(id)a1;

- (void).cxx_destruct;
- (id)differenceFromModel:(id)a0;
- (id)initWithCategories:(id)a0;

@end
