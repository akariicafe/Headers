@interface NUJSProxy : NSObject

@property (readonly, nonatomic) id representedObject;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithRepresentedObject:(id)a0 context:(id)a1;

@end
