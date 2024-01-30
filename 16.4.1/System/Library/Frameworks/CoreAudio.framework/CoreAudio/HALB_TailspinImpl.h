@interface HALB_TailspinImpl : NSObject

+ (BOOL)dumpTailspinSync:(unsigned long long)a0 forReason:(id)a1;
+ (BOOL)enableTailspinSync;
+ (id)initOptionsDictionary;
+ (void)prepareDumpOptions:(unsigned long long)a0 outDict:(id *)a1;

@end
