@interface SKCustomFieldNode : SKFieldNode

@property (copy, nonatomic) id /* block */ block;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_initialize;
- (id)init;
- (id)_descriptionClassName;
- (id /* block */)batchBlock;
- (void)setBatchBlock:(id /* block */)a0;

@end
