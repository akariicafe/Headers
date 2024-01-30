@interface NUJSProxy : NSObject

@property (readonly, nonatomic) id representedObject;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (id)initWithRepresentedObject:(id)a0 context:(id)a1;

@end
