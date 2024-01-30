@interface PXStoryHitTestResult : PXGHitTestResult

@property (readonly, nonatomic) id /* block */ primaryAction;
@property (readonly, nonatomic) long long clipIdentifier;
@property (readonly, nonatomic) id /* block */ touchAction;

- (void).cxx_destruct;
- (id)initWithSpriteIndex:(unsigned int)a0 layout:(id)a1;
- (id)initWithSpriteIndex:(unsigned int)a0 layout:(id)a1 identifier:(id)a2;
- (id)primaryAction:(id /* block */)a0;
- (id)clipIdentifier:(long long)a0;
- (id)touchAction:(id /* block */)a0;

@end
