@class MOApplication;

@interface MOEffectiveOptionalApplication : NSObject

@property (readonly) MOApplication *value;
@property (readonly) MOApplication *defaultValue;

- (void).cxx_destruct;
- (id)initWithValue:(id)a0 defaultValue:(id)a1;

@end
