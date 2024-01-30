@interface OAVPath : NSObject

+ (struct EshComputedValue { BOOL x0; int x1; })noneParam;
+ (int)parseCommand:(const char **)a0;
+ (struct EshComputedValue { BOOL x0; int x1; })parseParam:(const char **)a0 first:(BOOL)a1;
+ (void)readPath:(id)a0 toGeometry:(id)a1;
+ (void)writePath:(id)a0 toString:(id)a1;

@end
