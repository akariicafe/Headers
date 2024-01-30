@class MOWebContentFilterPolicy;

@interface MOEffectiveWebContentFilterPolicy : NSObject

@property (readonly) MOWebContentFilterPolicy *value;
@property (readonly) MOWebContentFilterPolicy *defaultValue;

- (id)initWithValue:(id)a0 defaultValue:(id)a1;
- (void).cxx_destruct;

@end
