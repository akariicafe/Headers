@class NSString;

@interface PIParallaxStyleBindingParameter : PIParallaxStyleParameter

@property (readonly, copy, nonatomic) NSString *variableName;

- (id)type;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)evaluateWithContext:(id)a0 error:(out id *)a1;
- (id)initWithVariableName:(id)a0;
- (BOOL)isEqualToParallaxStyleParameter:(id)a0;

@end
