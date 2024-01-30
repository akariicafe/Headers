@class NSArray, NSDictionary;

@interface SBSwitcherModifierQuerySnapshot : NSObject

@property (retain, nonatomic) NSArray *implementingQueryMethods;
@property (retain, nonatomic) NSArray *nonImplementingQueryMethods;
@property (retain, nonatomic) NSDictionary *queryMethodsToDescriptions;

- (void).cxx_destruct;

@end
