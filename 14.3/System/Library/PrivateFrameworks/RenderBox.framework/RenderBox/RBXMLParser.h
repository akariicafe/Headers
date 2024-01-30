@class RBFill, NSString, RBDisplayList, NSURL, NSError, RBShape, NSXMLParser;
@protocol RBXMLParserDelegate;

@interface RBXMLParser : NSObject <NSXMLParserDelegate> {
    id<RBXMLParserDelegate> _delegate;
    struct objc_ptr<NSXMLParser *> { NSXMLParser *_p; } _xml_parser;
    struct objc_ptr<NSURL *> { NSURL *_p; } _base_url;
    struct objc_ptr<RBDisplayList *> { RBDisplayList *_p; } _list;
    struct objc_ptr<RBShape *> { RBShape *_p; } _shape;
    struct objc_ptr<RBFill *> { RBFill *_p; } _fill;
    struct objc_ptr<NSError *> { NSError *_p; } _error;
    struct State { void /* function */ **x0; struct State *x1; } *_state;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long long __cap_; } __l; struct __short { char __data_[23]; struct { unsigned char __size_; } ; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } _characters;
    struct cf_ptr<__CFDictionary *> { struct __CFDictionary *_p; } _image_cache;
    struct cf_ptr<__CFDictionary *> { struct __CFDictionary *_p; } _font_cache;
    BOOL _aborted;
    BOOL _linear_colors;
}

@property (readonly, nonatomic) RBDisplayList *displayList;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) struct { float red; float green; float blue; float alpha; } backgroundColor;
@property (readonly, nonatomic) int colorMode;
@property (readonly, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parserWithDelegate:(id)a0 contentsOfURL:(id)a1 options:(id)a2;

- (BOOL)parse;
- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (void)parser:(id)a0 foundCharacters:(id)a1;
- (void)parserDidStartDocument:(id)a0;
- (void)parserDidEndDocument:(id)a0;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (id)initWithDelegate:(id)a0 contentsOfURL:(id)a1 options:(id)a2;
- (void)abortParsing:(id)a0;

@end
