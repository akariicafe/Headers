@class NSMutableString, NSMutableArray;

@interface MFPlainTextDocument : NSObject {
    NSMutableString *_text;
    NSMutableArray *_fragments;
}

- (unsigned long long)fragmentCount;
- (id)string;
- (void)dealloc;
- (void)appendArchivedRepresentation:(id)a0;
- (void)appendString:(id)a0 withQuoteLevel:(unsigned int)a1;
- (id)archivedRepresentation;
- (void)getFormatFlowedString:(id *)a0 insertedTrailingSpaces:(BOOL *)a1 encoding:(unsigned int)a2;
- (void)getString:(id *)a0 quoteLevel:(unsigned int *)a1 ofFragmentAtIndex:(unsigned long long)a2;
- (id)quotedString:(unsigned int)a0;

@end
