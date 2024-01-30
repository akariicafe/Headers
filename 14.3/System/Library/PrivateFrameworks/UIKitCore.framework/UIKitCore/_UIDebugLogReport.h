@class NSMutableArray;

@interface _UIDebugLogReport : NSObject

@property (retain, nonatomic, getter=_statements) NSMutableArray *statements;
@property (retain, nonatomic, getter=_prefixStack) NSMutableArray *prefixStack;
@property (readonly, nonatomic) unsigned long long messageCount;
@property (nonatomic) unsigned long long currentIndentLevel;
@property (copy, nonatomic) id /* block */ fallbackMessagePrefixHandler;

- (void)addMessage:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)addLineBreak;
- (void)addMessageWithFormat:(id)a0;
- (void)incrementIndentLevelAndPushMessagePrefix:(id)a0;
- (void)decrementIndentLevelAndPopMessagePrefix;
- (void)pushMessagePrefix:(id)a0;
- (void)popMessagePrefix;
- (void)incrementIndentLevel;
- (void)decrementIndentLevel;
- (void)resetIndentLevel;
- (id)_messagePrefixAtIndentLevel:(unsigned long long)a0;
- (void)pushMessagePrefixHandler:(id /* block */)a0;
- (void)clearAllMessagePrefixes;

@end
