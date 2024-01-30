@interface _PASLPWriterV1 : NSObject

+ (id)fileBackedDataWithPropertyList:(id)a0 appendedToFd:(int)a1 startOfs:(long long *)a2 error:(id *)a3;
+ (id)fileBackedDataWithPropertyList:(id)a0 writtenToPath:(id)a1 error:(id *)a2;
+ (id)dataWithPropertyList:(id)a0 error:(id *)a1;

- (id)init;

@end
