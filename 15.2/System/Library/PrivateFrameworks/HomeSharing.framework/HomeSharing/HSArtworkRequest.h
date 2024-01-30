@interface HSArtworkRequest : HSRequest

+ (id)requestWithDatabaseID:(unsigned int)a0 itemID:(unsigned long long)a1 size:(struct CGSize { double x0; double x1; })a2;

- (BOOL)isConcurrent;
- (id)initWithDatabaseID:(unsigned int)a0 itemID:(unsigned long long)a1 size:(struct CGSize { double x0; double x1; })a2;
- (BOOL)acceptsGzipEncoding;

@end
