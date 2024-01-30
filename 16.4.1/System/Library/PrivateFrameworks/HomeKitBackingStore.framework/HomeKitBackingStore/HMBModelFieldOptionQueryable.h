@interface HMBModelFieldOptionQueryable : HMBModelFieldOption

@property (copy, nonatomic) id /* block */ encodingBlock;
@property (copy, nonatomic) id /* block */ decodingBlock;
@property (copy, nonatomic) id /* block */ descriptionBlock;

- (void)applyTo:(id)a0;
- (id)initWithEncodingBlock:(id /* block */)a0 decodingBlock:(id /* block */)a1 descriptionBlock:(id /* block */)a2;
- (void).cxx_destruct;

@end
