@interface SHAudioUtilities : NSObject

+ (unsigned long long)convertMachTimeToMillisecods:(unsigned long long)a0;
+ (id)bufferTail:(id)a0 length:(double)a1;
+ (double)lengthOfBuffer:(id)a0;
+ (id)extractFromBuffer:(id)a0 atPosition:(unsigned int)a1 length:(unsigned int)a2;
+ (id)splitBuffer:(id)a0 fromStartPosition:(unsigned int)a1 intoLengthsOfSize:(double)a2;
+ (id)splitBuffer:(id)a0 atPosition:(unsigned int)a1;
+ (BOOL)isAudioFormatSupported:(id)a0;
+ (id)audioBufferFromData:(void *)a0 byteSize:(unsigned long long)a1 inFormat:(id)a2;

@end
