@class NSArray;

@interface RTTDictionaryManager : NSObject

@property (retain, nonatomic) NSArray *availableDictionaries;

+ (id)_availableDictionaryAssetsUsingRemoteInfo:(BOOL)a0;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)downloadIfNeeded;
- (void)deleteIfNeeded;
- (id)_ttyDictionaryAsset;
- (void)_downloadAsset:(id)a0;

@end
