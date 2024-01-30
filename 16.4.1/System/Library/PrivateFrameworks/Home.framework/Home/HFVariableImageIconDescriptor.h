@interface HFVariableImageIconDescriptor : HFImageIconDescriptor

@property (readonly, nonatomic) double variableValue;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithSystemImageNamed:(id)a0 variableValue:(double)a1 configuration:(id)a2;

@end
