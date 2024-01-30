@interface MTRError : NSObject

+ (id)errorForCHIPErrorCode:(struct ChipError { unsigned int x0; char *x1; unsigned int x2; })a0;
+ (id)errorForIMStatus:(const void *)a0;
+ (struct ChipError { unsigned int x0; char *x1; unsigned int x2; })errorToCHIPErrorCode:(id)a0;

@end
