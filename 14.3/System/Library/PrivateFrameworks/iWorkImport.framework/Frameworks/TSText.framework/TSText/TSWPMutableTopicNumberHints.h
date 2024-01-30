@class NSString, TSUPointerKeyDictionary;

@interface TSWPMutableTopicNumberHints : NSObject <TSWPTopicNumberHints> {
    TSUPointerKeyDictionary *_numbersForListStyle;
    unsigned long long _charIndex;
    unsigned long long _validThroughCharIndex;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)p_deepCopyDictionary:(id)a0;

- (id)entries;
- (id)init;
- (unsigned long long)charIndex;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)reset;
- (BOOL)isEqual:(id)a0;
- (void)offsetCharIndexBy:(long long)a0 startCharIndex:(unsigned long long)a1;
- (void)advanceToCharIndex:(unsigned long long)a0 storage:(id)a1;
- (unsigned long long)charIndexValidThrough;
- (void)setCharIndex:(unsigned long long)a0 validThroughCharIndex:(unsigned long long)a1;
- (void)unarchiveSetEntries:(id)a0 forListStyle:(id)a1;
- (void)setTopicNumber:(unsigned long long)a0 forList:(id)a1 level:(unsigned long long)a2 charIndex:(unsigned long long)a3;
- (BOOL)isEquivalentStateToTopicNumberHints:(id)a0;
- (void)backUpByOneParagraphWithPreviousState:(id)a0 storage:(id)a1;
- (unsigned long long)nextTopicNumberForList:(id)a0 level:(unsigned long long)a1;
- (unsigned long long)previousCharIndexForList:(id)a0 level:(unsigned long long)a1;

@end
