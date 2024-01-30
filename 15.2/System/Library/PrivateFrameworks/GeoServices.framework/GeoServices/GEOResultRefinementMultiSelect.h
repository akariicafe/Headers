@class NSString, NSArray;

@interface GEOResultRefinementMultiSelect : NSObject

@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSArray *multiSelect;
@property (nonatomic) unsigned int maximumNumberOfSelectElements;
@property (nonatomic) long long clauseType;
@property (readonly, nonatomic) BOOL showEqualWidthButtonsOnFilterView;

- (id)initWithDisplayName:(id)a0 multiSelect:(id)a1 maximumNumberOfSelectElements:(unsigned int)a2 clauseType:(long long)a3 showEqualWidthButtonsOnFilterView:(BOOL)a4;
- (void).cxx_destruct;
- (id)initWithResultRefinementMultiSelect:(id)a0;
- (id)convertToGEOPDResultRefinementMultiSelect;

@end
