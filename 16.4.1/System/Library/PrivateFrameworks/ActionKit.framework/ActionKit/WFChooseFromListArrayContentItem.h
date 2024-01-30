@class NSArray;

@interface WFChooseFromListArrayContentItem : WFContentItem

@property (readonly, nonatomic) NSArray *items;

+ (id)ownedTypes;
+ (id)itemWithItems:(id)a0 named:(id)a1;
+ (id)itemWithObjects:(id)a0 named:(id)a1;

- (BOOL)getListSubtitle:(id /* block */)a0;
- (id)allowedClassesForDecodingInternalRepresentations;

@end
