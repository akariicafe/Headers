@class NSDate;

@interface WFDateContentItem : WFContentItem <WFContentItemClass>

@property (readonly, nonatomic) NSDate *date;

+ (id)typeDescription;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;

- (BOOL)getListAltText:(id /* block */)a0;
- (id)generateObjectRepresentationForClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (id)richListTitle;

@end
