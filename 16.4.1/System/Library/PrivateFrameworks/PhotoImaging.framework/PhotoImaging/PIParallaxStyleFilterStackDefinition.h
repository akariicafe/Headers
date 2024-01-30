@class NSString, NSArray;

@interface PIParallaxStyleFilterStackDefinition : PIParallaxStyleDefinition

@property (readonly, copy, nonatomic) NSString *stackName;
@property (readonly, copy, nonatomic) NSArray *filters;

- (id)type;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)evaluateWithContext:(id)a0 error:(out id *)a1;
- (id)initWithStackName:(id)a0 filters:(id)a1;
- (BOOL)isEqualToParallaxStyleDefinition:(id)a0;
- (BOOL)isEqualToParallaxStyleFilterStackDefinition:(id)a0;

@end
