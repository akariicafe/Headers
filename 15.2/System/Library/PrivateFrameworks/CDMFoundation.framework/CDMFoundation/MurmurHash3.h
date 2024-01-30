@interface MurmurHash3 : NSObject

+ (void)hash128WithKey:(const void *)a0 length:(unsigned long long)a1 seed:(unsigned int)a2 out:(const char *)a3;

@end
