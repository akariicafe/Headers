@class NSString, REScriptParser, REScriptTokenizer, REScriptSymbolTable;
@protocol REScriptBuffer, REBacktrackingTokenBuffer;

@interface REScriptProcessor : NSObject <REScriptTokenizerDelegate, REScriptParserDelegate> {
    NSString *_path;
    id<REScriptBuffer> _buffer;
    REScriptTokenizer *_tokenizer;
    id<REBacktrackingTokenBuffer> _tokenStack;
    REScriptParser *_parser;
    REScriptSymbolTable *_table;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_sharedSystemTable;
+ (id)processorWithPath:(id)a0;
+ (id)processorWithSource:(id)a0;

- (id)features;
- (id)rules;
- (void).cxx_destruct;
- (void)_process;
- (id)rulesWithNames:(id)a0;
- (void)_encounteredError:(id)a0;
- (id)featuresWithNames:(id)a0;
- (id)initWithScriptBuffer:(id)a0 path:(id)a1;
- (void)parser:(id)a0 didEncouterParserError:(id)a1;
- (void)tokenizer:(id)a0 didEncouterTokenError:(id)a1;

@end
