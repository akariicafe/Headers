@interface CHIPError : NSObject

+ (id)errorForCHIPErrorCode:(struct ChipError { unsigned int x0; char *x1; unsigned int x2; })a0;
+ (id)errorForZCLErrorCode:(unsigned char)a0;
+ (struct ChipError { unsigned int x0; char *x1; unsigned int x2; })errorToCHIPErrorCode:(id)a0;

@end
