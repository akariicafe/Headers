@interface ADAppVector : ADVector

@property (readonly, nonatomic) unsigned int adamID;

- (id)data;
- (id)initWithVersion:(id)a0 header:(struct ADAppVectorHeader { unsigned int x0; unsigned int x1; unsigned int x2; } *)a1 floats:(float *)a2;
- (id)initWithString:(id)a0 version:(id)a1;

@end
