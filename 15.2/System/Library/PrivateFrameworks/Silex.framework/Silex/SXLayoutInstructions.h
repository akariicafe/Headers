@class NSArray;

@interface SXLayoutInstructions : NSObject

@property (readonly, nonatomic) NSArray *instructions;

+ (id)defaultInstructions;

- (id)description;
- (void).cxx_destruct;
- (void)didLayoutComponentBlueprint:(id)a0 blueprint:(id)a1;
- (BOOL)areFulfilledForBlueprint:(id)a0;
- (id)initWithInstructions:(id)a0;

@end
