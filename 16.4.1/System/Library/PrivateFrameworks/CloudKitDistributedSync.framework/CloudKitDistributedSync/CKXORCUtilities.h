@interface CKXORCUtilities : NSObject

+ (void)enumerateColumn:(void *)a0 includingRoot:(BOOL)a1 shallow:(BOOL)a2 withBlock:(id /* block */)a3;
+ (void)setDefaultValuesForStruct:(unsigned long long)a0 withRootColumn:(void *)a1 atOffset:(unsigned long long)a2 withSchema:(id)a3 orcHelpers:(id)a4;

@end
