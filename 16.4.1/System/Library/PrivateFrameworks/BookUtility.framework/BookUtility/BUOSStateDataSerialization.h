@interface BUOSStateDataSerialization : NSObject

+ (struct os_state_data_s { unsigned int x0; union { unsigned int x0 : 32; unsigned int x1; } x1; struct os_state_data_decoder_s { char x0[64]; char x1[64]; } x2; char x3[64]; unsigned char x4[0]; } *)dataWithTitle:(id)a0 propertyList:(id)a1 error:(out id *)a2;

@end
