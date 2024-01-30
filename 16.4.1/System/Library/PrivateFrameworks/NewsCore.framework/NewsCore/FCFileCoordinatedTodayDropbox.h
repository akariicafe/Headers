@class FCFileCoordinatedDictionary;

@interface FCFileCoordinatedTodayDropbox : NSObject

@property (retain, nonatomic) FCFileCoordinatedDictionary *fileCoordinatedDictionary;

- (void)peekWithAccessor:(id /* block */)a0;
- (void)depositWithAccessor:(id /* block */)a0 completion:(id /* block */)a1;
- (id)initWithFileURL:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
