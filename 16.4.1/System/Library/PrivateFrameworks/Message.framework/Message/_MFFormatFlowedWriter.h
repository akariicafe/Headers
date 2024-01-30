@class NSMutableString, MFPlainTextDocument;

@interface _MFFormatFlowedWriter : NSObject {
    MFPlainTextDocument *_inputDocument;
    unsigned int _encoding;
    NSMutableString *_outputString;
    NSMutableString *_quotedString;
    unsigned char _addedTrailingSpaces : 1;
    NSMutableString *_lineString;
}

+ (id)newWithPlainTextDocument:(id)a0 encoding:(unsigned int)a1;

- (id)outputString;
- (void).cxx_destruct;
- (unsigned long long)_findLineBreakInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 maxCharWidthCount:(unsigned long long)a1 endIsURL:(BOOL)a2;
- (void)_outputQuotedParagraph:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 withQuoteLevel:(unsigned int)a2;
- (BOOL)addedTrailingSpaces;
- (id)quotedString;

@end
