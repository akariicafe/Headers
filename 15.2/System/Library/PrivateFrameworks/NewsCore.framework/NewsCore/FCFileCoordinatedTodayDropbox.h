@class FCFileCoordinatedDictionary;

@interface FCFileCoordinatedTodayDropbox : NSObject

@property (retain, nonatomic) FCFileCoordinatedDictionary *fileCoordinatedDictionary;

- (void)peekWithAccessor:(id /* block */)a0;
- (id)initWithFileURL:(id)a0;
- (void).cxx_destruct;
- (void)depositWithAccessor:(id /* block */)a0 completion:(id /* block */)a1;
- (id)init;

@end
