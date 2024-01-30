@class MOWebContentFilterPolicy;

@interface MOEffectiveWebContentFilterPolicy : NSObject

@property (readonly) MOWebContentFilterPolicy *value;
@property (readonly) MOWebContentFilterPolicy *defaultValue;

- (void).cxx_destruct;
- (id)initWithValue:(id)a0 defaultValue:(id)a1;

@end
