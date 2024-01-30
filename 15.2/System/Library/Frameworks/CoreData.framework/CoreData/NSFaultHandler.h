@interface NSFaultHandler : NSObject

+ (void)initialize;
+ (BOOL)accessInstanceVariablesDirectly;

- (id)fulfillFault:(id)a0 withContext:(id)a1 forIndex:(unsigned long long)a2;

@end
