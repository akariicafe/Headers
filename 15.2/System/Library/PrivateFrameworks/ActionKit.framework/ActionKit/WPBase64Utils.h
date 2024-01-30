@interface WPBase64Utils : NSObject

+ (id)encodeData:(id)a0;
+ (id)decodeString:(id)a0;
+ (void)encodeInputStream:(id)a0 withChunkHandler:(id /* block */)a1;
+ (void)encodeFileHandle:(id)a0 withChunkHandler:(id /* block */)a1;

@end
