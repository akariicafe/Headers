@interface EBFontTable : NSObject

+ (unsigned long long)edFontIndexFromXlFontIndex:(unsigned int)a0;
+ (void)readWithState:(id)a0;
+ (unsigned int)xlFontIndexFromEDFontIndex:(unsigned long long)a0;

@end
