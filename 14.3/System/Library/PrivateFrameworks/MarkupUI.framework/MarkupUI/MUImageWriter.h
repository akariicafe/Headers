@interface MUImageWriter : NSObject

- (id)encodedModelFromAnnotationsController:(id)a0 encrypt:(BOOL)a1;
- (BOOL)writeUsingBaseImage:(id)a0 withAnnotationsFromController:(id)a1 asImageOfType:(id)a2 toConsumer:(struct CGDataConsumer { } *)a3 embedSourceImageAndAnnotationsAsMetadata:(BOOL)a4 encryptPrivateMetadata:(BOOL)a5 error:(id *)a6;

@end
