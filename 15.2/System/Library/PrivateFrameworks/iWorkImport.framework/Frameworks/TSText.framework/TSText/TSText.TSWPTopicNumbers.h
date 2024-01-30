@interface TSText.TSWPTopicNumbers : NSObject {
    void /* unknown type, empty encoding */ storage;
    void /* unknown type, empty encoding */ topicNumberData;
    void /* unknown type, empty encoding */ invalidCharIndex;
}

- (id)hintsForCharIndex:(unsigned long long)a0;
- (id)initWithStorage:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)invalidateFromCharIndex:(unsigned long long)a0;
- (id)numberedListLabelForCharIndex:(unsigned long long)a0 includeFormatting:(BOOL)a1;
- (unsigned long long)listNumberForCharIndex:(unsigned long long)a0;

@end
