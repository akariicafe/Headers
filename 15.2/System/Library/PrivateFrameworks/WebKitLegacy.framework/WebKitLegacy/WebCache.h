@interface WebCache : NSObject

+ (void)initialize;
+ (void)setDisabled:(BOOL)a0;
+ (BOOL)isDisabled;
+ (struct CGImage { } *)imageForURL:(id)a0;
+ (id)statistics;
+ (void)empty;
+ (void)emptyInMemoryResources;
+ (void)sizeOfDeadResources:(int *)a0;
+ (void)clearCachedCredentials;

@end
