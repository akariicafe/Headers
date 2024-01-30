@class NSArray;

@interface WFSmartPromptDatabaseLookupResult : NSObject

@property (readonly, nonatomic) NSArray *allowedStates;
@property (readonly, nonatomic) NSArray *deniedStates;
@property (readonly, nonatomic) NSArray *undefinedStates;
@property (readonly, nonatomic) NSArray *restrictedStates;

- (void).cxx_destruct;
- (id)initWithAllowedStates:(id)a0 deniedStates:(id)a1 undefinedStates:(id)a2;
- (id)initWithAllowedStates:(id)a0 deniedStates:(id)a1 undefinedStates:(id)a2 restrictedStates:(id)a3;
- (id)resultByAddingResult:(id)a0;

@end
