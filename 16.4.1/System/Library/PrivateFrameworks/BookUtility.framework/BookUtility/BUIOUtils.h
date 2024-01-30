@interface BUIOUtils : NSObject

+ (struct CGDataProvider { } *)newCGDataProviderForInputStream:(id)a0;
+ (struct CGDataProvider { } *)newCGDataProviderForReadChannel:(id)a0;
+ (void)readAllFromChannel:(id)a0 offset:(long long)a1 length:(unsigned long long)a2 completion:(id /* block */)a3;

@end
