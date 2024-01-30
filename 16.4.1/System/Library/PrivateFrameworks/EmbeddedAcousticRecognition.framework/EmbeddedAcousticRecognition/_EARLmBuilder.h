@interface _EARLmBuilder : NSObject

+ (id)buildLmWithConfig:(id)a0 root:(id)a1 data:(id)a2 dir:(id)a3 shouldStop:(id /* block */)a4;
+ (id)generateNgramCountsWithConfig:(id)a0 root:(id)a1 data:(id)a2;
+ (id)loadLmFromDir:(id)a0;
+ (void)removeLmDir:(id)a0;

@end
