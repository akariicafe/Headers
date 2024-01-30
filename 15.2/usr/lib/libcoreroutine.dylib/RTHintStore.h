@class NSString;

@interface RTHintStore : RTStore <RTEnumerableStore>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequestForHintEnumerationOptions:(id)a0 error:(id *)a1;
+ (id)predicateForSourceFilter:(id)a0;
+ (BOOL)batchInsertHintsDictionary:(id)a0 context:(id)a1 error:(id *)a2;

- (void)_regenerateLOIHintsWithHandler:(id /* block */)a0;
- (void)_purgeHintsPredating:(id)a0 handler:(id /* block */)a1;
- (void)purgeHintsPredating:(id)a0 handler:(id /* block */)a1;
- (void)_clearHintsForSourceFilter:(id)a0 handler:(id /* block */)a1;
- (void)fetchHintStatsNearLocation:(id)a0 handler:(id /* block */)a1;
- (id)fetchRequestFromOptions:(id)a0 offset:(unsigned long long)a1 error:(id *)a2;
- (void)clearWithHandler:(id /* block */)a0;
- (void)clearHintsForSourceFilter:(id)a0 handler:(id /* block */)a1;
- (void)fetchIsHintNearLocation:(id)a0 withHandler:(id /* block */)a1;
- (void)enumerateStoredHintsWithOptions:(id)a0 usingBlock:(id /* block */)a1;
- (void)storeHints:(id)a0 handler:(id /* block */)a1;
- (void)regenerateLOIHintsWithHandler:(id /* block */)a0;
- (void)_fetchHintStatsNearLocation:(id)a0 handler:(id /* block */)a1;

@end
