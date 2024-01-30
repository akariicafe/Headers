@interface NUJSProxy : NSObject

@property (readonly, nonatomic) id representedObject;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)description;
- (id)initWithRepresentedObject:(id)a0 context:(id)a1;

@end
