@interface AMSOptional : NSObject

@property (readonly, nonatomic) id value;

+ (id)optionalWithValue:(id)a0;
+ (id)optionalWithNil;

- (id)initWithValue:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
