@class REScriptToken, NSString, NSMutableArray;
@protocol RETokenBuffer;

@interface RETokenStack : NSObject <REBacktrackingTokenBuffer> {
    id<RETokenBuffer> _buffer;
    unsigned long long _position;
    NSMutableArray *_tokenStack;
    NSMutableArray *_positionStack;
}

@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) REScriptToken *currentToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pop;
- (void)next;
- (void)consume;
- (void).cxx_destruct;
- (void)push;
- (id)initWithTokenBuffer:(id)a0;

@end
