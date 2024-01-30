@class NSString;

@interface UIPDFParserDelegate : NSObject <NSXMLParserDelegate> {
    struct CGPoint { double x; double y; } _p[4];
    struct CGPath { } *_path;
}

@property (readonly) struct CGPath { } *path;
@property (readonly) BOOL parserError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void)parserDidStartDocument:(id)a0;
- (id)init;
- (struct CGPath { } *)path;
- (void)dealloc;
- (void)parser:(id)a0 parseErrorOccurred:(id)a1;

@end
