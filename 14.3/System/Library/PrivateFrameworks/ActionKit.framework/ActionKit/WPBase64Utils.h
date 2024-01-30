@interface WPBase64Utils : NSObject

+ (id)decodeString:(id)a0;
+ (id)encodeData:(id)a0;
+ (void)encodeInputStream:(id)a0 withChunkHandler:(id /* block */)a1;
+ (void)encodeFileHandle:(id)a0 withChunkHandler:(id /* block */)a1;

@end
