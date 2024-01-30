@class FCFileCoordinatedDictionary;

@interface FCFileCoordinatedTodayPersonalizationUpdate : NSObject

@property (retain, nonatomic) FCFileCoordinatedDictionary *fileCoordinatedDictionary;

- (void)readWithAccessor:(id /* block */)a0;
- (id)initWithFileURL:(id)a0;
- (void)clearUpdates;
- (void).cxx_destruct;
- (id)init;
- (void)submitUpdate:(id)a0 withCompletion:(id /* block */)a1;

@end
