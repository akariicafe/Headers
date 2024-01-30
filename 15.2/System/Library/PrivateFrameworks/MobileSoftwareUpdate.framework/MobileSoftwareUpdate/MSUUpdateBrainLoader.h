@class NSDictionary;

@interface MSUUpdateBrainLoader : NSObject

@property (retain) NSDictionary *attributesDict;

- (BOOL)cancel:(id *)a0;
- (id)initWithDictionary:(id)a0;
- (void)dealloc;
- (void)loadUpdateBrainWithOptions:(id)a0 progressHandler:(id /* block */)a1;
- (void)adjustOptions:(id)a0 completion:(id /* block */)a1;
- (long long)requiredDiskSpace:(id *)a0;

@end
