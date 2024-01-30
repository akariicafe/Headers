@class NSMutableArray;

@interface _UIDebugLogReport : NSObject

@property (retain, nonatomic, getter=_statements) NSMutableArray *statements;
@property (retain, nonatomic, getter=_prefixStack) NSMutableArray *prefixStack;
@property (readonly, nonatomic) unsigned long long messageCount;
@property (nonatomic) unsigned long long currentIndentLevel;
@property (copy, nonatomic) id /* block */ fallbackMessagePrefixHandler;

- (void)addLineBreak;
- (void).cxx_destruct;
- (id)init;
- (void)addMessage:(id)a0;
- (void)addMessageWithFormat:(id)a0;
- (void)pushMessagePrefix:(id)a0;
- (void)incrementIndentLevelAndPushMessagePrefix:(id)a0;
- (void)decrementIndentLevelAndPopMessagePrefix;
- (void)incrementIndentLevel;
- (void)decrementIndentLevel;
- (id)_messagePrefixAtIndentLevel:(unsigned long long)a0;
- (void)clearAllMessagePrefixes;
- (void)pushMessagePrefixHandler:(id /* block */)a0;
- (void)popMessagePrefix;
- (void)resetIndentLevel;

@end
