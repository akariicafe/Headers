@class NSString, NSArray, NSNumber;

@interface GEOResultRefinementSort : NSObject

@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSArray *sorts;
@property (retain, nonatomic) NSNumber *selectedElementIndex;
@property (retain, nonatomic) NSNumber *defaultSelectedElementIndex;

- (id)initWithDisplayName:(id)a0 sorts:(id)a1 selectedElementIndex:(id)a2 defaultSelectedElementIndex:(id)a3;
- (id)initWithResultRefinementSort:(id)a0;
- (id)convertToGEOPDResultRefinementSort;
- (void).cxx_destruct;

@end
