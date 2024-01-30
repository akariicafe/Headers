@class NSString;

@interface DOCFeatureRequirement : NSObject

@property (readonly) NSString *name;
@property (readonly) id /* block */ requirementValidationBlock;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 requirementValidationBlock:(id /* block */)a1;

@end
