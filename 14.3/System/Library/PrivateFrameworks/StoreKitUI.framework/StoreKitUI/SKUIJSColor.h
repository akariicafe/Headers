@interface SKUIJSColor : IKJSObject <SKUIJSColor>

@property (readonly, nonatomic) unsigned long long red;
@property (readonly, nonatomic) unsigned long long green;
@property (readonly, nonatomic) unsigned long long blue;
@property (readonly, nonatomic) double alpha;

- (id)description;
- (id)initWithAppContext:(id)a0 color:(id)a1;

@end
