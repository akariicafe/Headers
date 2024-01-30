@interface ETModelDefMLP : ETModelDef

@property int input_size;
@property int hidden_size;
@property int output_size;

- (void)buildNetwork;

@end
