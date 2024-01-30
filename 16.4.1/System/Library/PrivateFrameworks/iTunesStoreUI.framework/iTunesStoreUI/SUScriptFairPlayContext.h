@interface SUScriptFairPlayContext : SUScriptObject

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;

- (BOOL)isOpen;
- (void)close;
- (id)_className;
- (id)signData:(id)a0;
- (id)_accountViewController;

@end
