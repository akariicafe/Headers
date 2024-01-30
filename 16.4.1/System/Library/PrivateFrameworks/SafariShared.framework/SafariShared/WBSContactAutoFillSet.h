@class NSString, NSDictionary, NSArray, NSSet;

@interface WBSContactAutoFillSet : NSObject

@property (readonly, copy, nonatomic) NSDictionary *controlIDToValueMap;
@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, copy, nonatomic) NSArray *fillDisplayProperties;
@property (readonly, copy, nonatomic) NSArray *skipDisplayProperties;
@property (readonly, copy, nonatomic) NSSet *propertiesToFillOrSkip;

+ (id)displayStringsForSkipMatches:(id)a0 matchesForForm:(id)a1 formDataController:(id)a2;
+ (id)displayStringsForFillMatches:(id)a0 skipMatches:(id)a1 matchesForForm:(id)a2 label:(id)a3 formDataController:(id)a4;

- (void).cxx_destruct;
- (id)initWithControlIDToValueMap:(id)a0 label:(id)a1 fillDisplayProperties:(id)a2 skipDisplayProperties:(id)a3 propertiesToFillOrSkip:(id)a4;

@end
