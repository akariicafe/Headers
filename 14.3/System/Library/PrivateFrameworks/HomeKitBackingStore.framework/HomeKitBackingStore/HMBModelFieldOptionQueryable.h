@interface HMBModelFieldOptionQueryable : HMBModelFieldOption

@property (copy, nonatomic) id /* block */ encodingBlock;
@property (copy, nonatomic) id /* block */ decodingBlock;
@property (copy, nonatomic) id /* block */ descriptionBlock;

- (void)applyTo:(id)a0;
- (void).cxx_destruct;
- (id)initWithEncodingBlock:(id /* block */)a0 decodingBlock:(id /* block */)a1 descriptionBlock:(id /* block */)a2;

@end
