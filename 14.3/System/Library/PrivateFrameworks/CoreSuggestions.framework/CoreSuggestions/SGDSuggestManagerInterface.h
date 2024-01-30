@interface SGDSuggestManagerInterface : NSObject

+ (void)initialize;
+ (id)xpcInterface;
+ (void)_whitelistXPCInterface:(id)a0 forProtocol:(id)a1 alreadyWhitelisted:(id)a2;
+ (id)xpcInterfaceForProtocol:(id)a0;
+ (void)_addSGXPCResponseToReplyWhitelistForProtocol:(id)a0 interface:(id)a1;
+ (id)realtimeSuggestionsClasses;
+ (void)interface:(id)a0 returns:(Class)a1 forSelector:(SEL)a2;
+ (void)_addSGXPCResponseToReplyWhitelistForMethods:(struct objc_method_description { SEL x0; char *x1; } *)a0 count:(unsigned int)a1 interface:(id)a2;
+ (void)_registerWhitelistBlock:(id /* block */)a0 forProtocol:(id)a1;
+ (void)interface:(id)a0 returnsArrayOf:(Class)a1 forSelector:(SEL)a2;

@end
