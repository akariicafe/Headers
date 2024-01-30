@interface SUScriptFairPlayContext : SUScriptObject

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;

- (void)close;
- (BOOL)isOpen;
- (id)_className;
- (id)_accountViewController;
- (id)signData:(id)a0;

@end
