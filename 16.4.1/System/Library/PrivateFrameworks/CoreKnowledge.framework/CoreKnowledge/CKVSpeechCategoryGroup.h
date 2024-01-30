@class NSSet;

@interface CKVSpeechCategoryGroup : NSObject

@property (readonly, nonatomic) NSSet *itemTypes;
@property (readonly, nonatomic) NSSet *speechCategories;

+ (id)groupForSpeechCategories:(id)a0;
+ (id)_calculateGroupForItemTypeNumber:(id)a0;
+ (id)groupForFieldTypes:(id)a0;
+ (id)_categoryToItemTypeCache;
+ (BOOL)_speechCategory:(id)a0 hasFieldTypes:(id)a1;
+ (id)_itemTypesForSpeechCategory:(id)a0;
+ (id)all;
+ (id)_categoryToFieldTypeMap;
+ (id)groupForItemType:(long long)a0;

- (BOOL)isEqualToSpeechCategoryGroup:(id)a0;
- (id)initWithItemTypes:(id)a0 speechCategories:(id)a1;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)speechCategoriesDescription;
- (id)description;
- (void).cxx_destruct;

@end
