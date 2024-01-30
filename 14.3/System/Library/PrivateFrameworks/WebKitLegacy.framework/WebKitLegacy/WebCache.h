@interface WebCache : NSObject

+ (id)statistics;
+ (void)initialize;
+ (void)setDisabled:(BOOL)a0;
+ (BOOL)isDisabled;
+ (void)empty;
+ (struct CGImage { } *)imageForURL:(id)a0;
+ (void)emptyInMemoryResources;
+ (void)sizeOfDeadResources:(int *)a0;
+ (void)clearCachedCredentials;

@end
