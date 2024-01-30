@class NSString, NSMutableString;

@interface CPPDFAnnotationParserDelegate : NSObject <NSXMLParserDelegate> {
    NSMutableString *_characters;
    struct CGPoint { double x; double y; } _p[4];
    struct __CFArray { } *_quadPoints;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _rect;
}

@property (readonly, nonatomic) BOOL parseError;
@property (nonatomic) struct __CFDictionary { } *annotationDictionary;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } rect;
@property (readonly, nonatomic) struct __CFString { } *annotationId;
@property (readonly, nonatomic) struct __CFString { } *otherId;
@property (readonly, nonatomic) struct __CFString { } *content;
@property (readonly, nonatomic) struct CGColor { } *color;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)parser:(id)a0 foundCharacters:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void)parserDidStartDocument:(id)a0;
- (id)init;
- (void)dealloc;
- (void)parser:(id)a0 parseErrorOccurred:(id)a1;
- (void)addQuadpoints;

@end
