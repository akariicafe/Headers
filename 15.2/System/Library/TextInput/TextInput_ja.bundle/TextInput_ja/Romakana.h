@class NSCharacterSet;

@interface Romakana : NSObject {
    NSCharacterSet *_consonantsCharacterSet;
}

+ (id)hiraganaString:(id)a0 mappingArray:(id)a1;
+ (id)romajiString:(id)a0;
+ (id)kanaSymbol:(id)a0;
+ (struct { id x0; id x1; })splitRomaji:(id)a0 at:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)hiraganaFromRomaji:(id)a0 stripIncompleteRomajiAtEnd:(BOOL)a1 strippedLength:(unsigned long long *)a2;
- (id)adjustIncompleteRomaji:(id)a0;

@end
