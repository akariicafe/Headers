@class _PASLock, _PASSqliteDatabase, PPContextPredictor;

@interface PPAugmentedGazetteer : NSObject {
    _PASSqliteDatabase *_db;
    _PASLock *_lock;
    PPContextPredictor *_contextPredictor;
}

- (void)iterTokensForSentence:(id)a0 block:(id /* block */)a1;
- (id)metadataForName:(id)a0;
- (void)dealloc;
- (void)iterSentencesForText:(id)a0 block:(id /* block */)a1;
- (id)initWithDatabaseAsset:(id)a0 gazetteerPath:(id)a1 contextPredictor:(id)a2;
- (id)init;
- (void)iterExtractionsForText:(id)a0 addEntity:(id /* block */)a1 addTopic:(id /* block */)a2 addLocation:(id /* block */)a3;
- (void).cxx_destruct;

@end
