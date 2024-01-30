@class NSString, NSMutableString, ENXMLDTD;
@protocol ENXMLWriterDelegate;

@interface ENXMLWriter : NSObject {
    struct _xmlTextWriter { } *_xmlWriter;
    struct _xmlOutputBuffer { void *x0; void /* function */ *x1; void /* function */ *x2; struct _xmlCharEncodingHandler *x3; struct _xmlBuf *x4; struct _xmlBuf *x5; int x6; int x7; } *_xmlOutputBuffer;
}

@property (retain, nonatomic) NSString *currentElementName;
@property (weak, nonatomic) id<ENXMLWriterDelegate> delegate;
@property (retain, nonatomic) ENXMLDTD *dtd;
@property (nonatomic) unsigned long long openElementCount;
@property (readonly, nonatomic) NSMutableString *contents;

- (void)writeString:(id)a0;
- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)endElement;
- (BOOL)startElement:(id)a0 withAttributes:(id)a1;
- (void)endDocument;
- (BOOL)startElement:(id)a0;
- (void)writeRawString:(id)a0;
- (void)endCDATA;
- (void)startCDATA;
- (void)startDocument;
- (BOOL)startElement:(id)a0 attributes:(id)a1;
- (BOOL)writeAttributeName:(id)a0 value:(id)a1;
- (void)writeCDATA:(id)a0;
- (BOOL)writeElement:(id)a0 attributes:(id)a1 content:(id)a2;
- (BOOL)writeElement:(id)a0 withAttributes:(id)a1 content:(id)a2;
- (void)writeString:(id)a0 raw:(BOOL)a1;

@end
