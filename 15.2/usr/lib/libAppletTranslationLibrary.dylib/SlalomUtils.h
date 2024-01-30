@interface SlalomUtils : NSObject

+ (int)isValidFelicaBlock:(id)a0;
+ (unsigned long long)readBitsValueFromBuffer:(char *)a0 bitPosition:(int)a1 length:(int)a2;
+ (unsigned short)readUInt16FromBytes:(char *)a0;
+ (unsigned long long)getBitsFrom:(unsigned long long)a0 numberOfBits:(int)a1 startingFrom:(int)a2;
+ (unsigned int)readUInt24FromBytes:(char *)a0;
+ (unsigned long long)readNumberFromBytes:(char *)a0 numberOfBytes:(int)a1;

@end
