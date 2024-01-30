@interface SKCustomFieldNode : SKFieldNode

@property (copy, nonatomic) id /* block */ block;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)_initialize;
- (id)_descriptionClassName;
- (void)setBatchBlock:(id /* block */)a0;
- (id /* block */)batchBlock;

@end
