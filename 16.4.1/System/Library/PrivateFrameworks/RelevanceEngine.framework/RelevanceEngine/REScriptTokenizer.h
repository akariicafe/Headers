@class REScriptToken, NSString;
@protocol REScriptBuffer, REScriptTokenizerDelegate;

@interface REScriptTokenizer : NSObject <RETokenBuffer> {
    id<REScriptBuffer> _buffer;
    REScriptToken *_currentToken;
    unsigned long long _line;
    unsigned long long _column;
}

@property (weak, nonatomic) id<REScriptTokenizerDelegate> delegate;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) REScriptToken *currentToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)next;
- (void).cxx_destruct;
- (void)_consumeWhitespace;
- (BOOL)_hasChar;
- (BOOL)_matchTokenStart:(void /* function */ *)a0 body:(void /* function */ *)a1 value:(id *)a2;
- (unsigned short)_peekChar;
- (void)_popChar;
- (id)_readMultilineComment;
- (id)_readSingleComment;
- (id)_readString;
- (void)_validateToken;
- (id)initWithScriptBuffer:(id)a0;

@end
