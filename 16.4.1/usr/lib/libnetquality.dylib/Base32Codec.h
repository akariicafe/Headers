@interface Base32Codec : NSObject

+ (char)packBase32:(unsigned char)a0;
+ (unsigned char)unpackBase32:(char)a0;

@end
