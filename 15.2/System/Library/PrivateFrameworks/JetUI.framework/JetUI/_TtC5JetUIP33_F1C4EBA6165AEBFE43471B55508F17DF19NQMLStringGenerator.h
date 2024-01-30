@interface _TtC5JetUIP33_F1C4EBA6165AEBFE43471B55508F17DF19NQMLStringGenerator : NSObject <JUNQMLParser> {
    void /* unknown type, empty encoding */ parser;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ orderedListTracker;
    void /* unknown type, empty encoding */ accumulator;
    void /* unknown type, empty encoding */ attributeStack;
    void /* unknown type, empty encoding */ didParseEverything;
    void /* unknown type, empty encoding */ foregroundColor;
}

- (void)parser:(id)a0 didFindCharacters:(id)a1;
- (void)parserDidEndDocument:(id)a0;
- (void)parserDidStartListElement:(id)a0;
- (void)parserDidFindNewline:(id)a0;
- (void)parserDidStartDocument:(id)a0;
- (void).cxx_destruct;
- (void)parserDidEndListElement:(id)a0;
- (id)init;
- (void)parser:(id)a0 didEndListOfStyle:(unsigned long long)a1;
- (void)parser:(id)a0 didStartElement:(unsigned long long)a1 attributes:(id)a2;
- (void)parser:(id)a0 didEndElement:(unsigned long long)a1;
- (void)parser:(id)a0 didStartListOfStyle:(unsigned long long)a1;
- (void)parser:(id)a0 parseErrorOccurred:(id)a1;

@end
