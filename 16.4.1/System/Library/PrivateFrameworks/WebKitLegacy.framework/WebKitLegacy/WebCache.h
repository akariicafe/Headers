@interface WebCache : NSObject

+ (void)initialize;
+ (void)setDisabled:(BOOL)a0;
+ (id)statistics;
+ (void)empty;
+ (BOOL)isDisabled;
+ (struct CGImage { } *)imageForURL:(id)a0;
+ (void)clearCachedCredentials;
+ (void)emptyInMemoryResources;
+ (void)sizeOfDeadResources:(int *)a0;

@end
