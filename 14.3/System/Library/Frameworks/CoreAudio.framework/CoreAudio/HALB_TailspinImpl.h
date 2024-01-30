@interface HALB_TailspinImpl : NSObject

+ (id)initOptionsDictionary;
+ (void)prepareDumpOptions:(unsigned long long)a0 outDict:(id *)a1;
+ (BOOL)enableTailspinSync;
+ (BOOL)dumpTailspinSync:(unsigned long long)a0 forReason:(id)a1;

@end
