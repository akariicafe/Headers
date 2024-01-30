@protocol REBacktrackingTokenBuffer, REScriptParserDelegate;

@interface REScriptParser : NSObject {
    id<REBacktrackingTokenBuffer> _buffer;
}

@property (weak, nonatomic) id<REScriptParserDelegate> delegate;

- (void).cxx_destruct;
- (id)parse;
- (id)initWithBacktrackingBuffer:(id)a0;

@end
