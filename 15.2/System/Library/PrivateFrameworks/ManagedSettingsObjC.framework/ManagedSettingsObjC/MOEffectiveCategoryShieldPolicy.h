@class MOCategoryShieldPolicy;

@interface MOEffectiveCategoryShieldPolicy : NSObject

@property (readonly) MOCategoryShieldPolicy *value;
@property (readonly) MOCategoryShieldPolicy *defaultValue;

- (void).cxx_destruct;
- (id)initWithValue:(id)a0 defaultValue:(id)a1;

@end
