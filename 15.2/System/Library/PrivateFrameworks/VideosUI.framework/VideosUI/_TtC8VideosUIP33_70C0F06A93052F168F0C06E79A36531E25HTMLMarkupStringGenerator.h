@interface _TtC8VideosUIP33_70C0F06A93052F168F0C06E79A36531E25HTMLMarkupStringGenerator : NSObject <VUIHTMLMarkupParser> {
    void /* unknown type, empty encoding */ parser;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ accumulator;
    void /* unknown type, empty encoding */ fontTraitsStack;
    void /* unknown type, empty encoding */ didParseEverything;
}

- (void)parser:(id)a0 didFindCharacters:(id)a1;
- (void)parserDidEndDocument:(id)a0;
- (void)parserDidFindNewline:(id)a0;
- (void)parserDidStartDocument:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)parser:(id)a0 didEndElement:(unsigned long long)a1;
- (void)parser:(id)a0 parseErrorOccurred:(id)a1;
- (void)parser:(id)a0 didStartElement:(unsigned long long)a1;

@end
