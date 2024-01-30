@class NSArray, NSDictionary;

@interface AVTAvatarAttributeEditorModelDiff : NSObject

@property (readonly, nonatomic) NSArray *sectionDiffs;
@property (readonly, nonatomic) NSDictionary *sectionItemDiffs;

- (void).cxx_destruct;
- (id)initWithSectionDiffs:(id)a0 sectionItemDiffs:(id)a1;

@end
