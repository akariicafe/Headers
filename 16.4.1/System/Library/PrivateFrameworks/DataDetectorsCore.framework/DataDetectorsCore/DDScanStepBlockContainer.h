@interface DDScanStepBlockContainer : NSObject

@property (readonly, nonatomic) id /* block */ block;
@property (readonly, nonatomic) long long identifier;

- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0 identifier:(long long)a1;

@end
