@interface SlalomUtils : NSObject

+ (unsigned long long)getBitsFrom:(unsigned long long)a0 numberOfBits:(int)a1 startingFrom:(int)a2;
+ (int)isValidFelicaBlock:(id)a0;
+ (unsigned long long)readBitsValueFromBuffer:(char *)a0 bitPosition:(int)a1 length:(int)a2;
+ (unsigned long long)readNumberFromBytes:(char *)a0 numberOfBytes:(int)a1;
+ (unsigned short)readUInt16FromBytes:(char *)a0;
+ (unsigned int)readUInt24FromBytes:(char *)a0;

@end
