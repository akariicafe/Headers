@interface PPTransaction : NSObject

+ (void)writeTransactionWithHandle:(id)a0 block:(id /* block */)a1;
+ (void)readTransactionWithHandle:(id)a0 block:(id /* block */)a1;

@end
