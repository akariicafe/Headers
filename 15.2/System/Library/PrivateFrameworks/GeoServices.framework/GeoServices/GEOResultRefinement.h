@class GEOResultRefinementMultiSelect, GEOResultRefinementToggle, GEOResultRefinementSort;

@interface GEOResultRefinement : NSObject

@property (nonatomic) long long type;
@property (retain, nonatomic) GEOResultRefinementToggle *toggle;
@property (retain, nonatomic) GEOResultRefinementMultiSelect *multiSelect;
@property (retain, nonatomic) GEOResultRefinementSort *sort;

- (void).cxx_destruct;
- (id)convertToGEOPDResultRefinement;
- (id)initWithResultRefinement:(id)a0;
- (id)initWithToggle:(id)a0;
- (id)initWithMultiSelect:(id)a0;
- (id)initWithSort:(id)a0;

@end
