@class NSString, MPUHTMLParser, NSData, NSMutableArray, NSMutableAttributedString;
@protocol MPUHTMLParserDelegate;

@interface _MPUHTMLParserState : NSObject <MPUHTMLParserState> {
    NSData *_data;
    void *_selfRef;
    MPUHTMLParser *_parser;
    id<MPUHTMLParserDelegate> _delegate;
    NSMutableArray *_errors;
    NSMutableAttributedString *_attributedString;
    NSMutableArray *_attributeDictionaries;
    NSMutableArray *_tagStack;
    NSMutableArray *_stringStack;
    struct { unsigned char providesDefaultAttributes : 1; unsigned char providesTagAttributes : 1; unsigned char providesPrependTagString : 1; } _delegateCapabilites;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)attributedString;
- (void)_endElement:(const char *)a0;
- (id)currentTagAttributes;
- (void)_characters:(const char *)a0 length:(int)a1;
- (void)_endDocument;
- (void)_appendString:(id)a0;
- (id)initWithParser:(id)a0 data:(id)a1;
- (BOOL)parse:(id *)a0;
- (void)_error:(long long)a0 msg:(const char *)a1 args:(char *)a2;
- (void).cxx_destruct;
- (void)_startElement:(const char *)a0 attrs:(const char **)a1;
- (id)tagStack;
- (id)attributes;
- (void)_startDocument;

@end
