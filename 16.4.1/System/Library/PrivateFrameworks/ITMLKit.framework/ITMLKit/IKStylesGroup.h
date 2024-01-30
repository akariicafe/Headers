@class NSArray, NSDictionary, NSIndexSet;

@interface IKStylesGroup : NSObject

@property (readonly, retain, nonatomic) NSArray *mediaQueryList;
@property (readonly, retain, nonatomic) NSArray *orderedStylesOrGroups;
@property (readonly, retain, nonatomic) NSDictionary *indexedSelectors;
@property (readonly, retain, nonatomic) NSIndexSet *groupIndexes;

+ (id)stylesGroupWithMarkup:(id)a0 filterBlockedStyles:(BOOL)a1;

- (void).cxx_destruct;
- (void)_computeIndexedSelectorsFromStylesOrGroups:(id)a0;
- (id)initWithCSSRule:(id)a0 mediaQueryList:(id)a1 filterBlockedStyles:(BOOL)a2;
- (id)initWithMarkup:(id)a0 parseSubGroups:(BOOL)a1 mediaQueryList:(id)a2 filterBlockedStyles:(BOOL)a3;

@end
