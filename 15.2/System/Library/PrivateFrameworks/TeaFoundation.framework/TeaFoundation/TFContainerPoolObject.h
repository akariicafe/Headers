@interface TFContainerPoolObject : NSObject

@property (readonly, nonatomic) unsigned long long ownership;
@property (readonly, nonatomic) id strongObject;
@property (readonly, weak, nonatomic) id weakObject;
@property (readonly, nonatomic) id object;

- (id)initWithObject:(id)a0 ownership:(unsigned long long)a1;
- (void).cxx_destruct;

@end
