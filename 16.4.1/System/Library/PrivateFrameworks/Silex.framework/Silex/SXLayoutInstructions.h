@class NSArray;

@interface SXLayoutInstructions : NSObject

@property (readonly, nonatomic) NSArray *instructions;

+ (id)defaultInstructions;

- (id)description;
- (void).cxx_destruct;
- (BOOL)areFulfilledForBlueprint:(id)a0;
- (void)didLayoutComponentBlueprint:(id)a0 blueprint:(id)a1;
- (id)initWithInstructions:(id)a0;

@end
