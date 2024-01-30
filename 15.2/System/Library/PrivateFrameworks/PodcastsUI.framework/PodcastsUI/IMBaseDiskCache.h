@class NSString;

@interface IMBaseDiskCache : NSObject <IMCache>

@property (retain, nonatomic) NSString *basePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearCache;
- (void)initialize;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)initWithBasePath:(id)a0;
- (id)init;
- (id)_allFiles;
- (id)pathForKey:(id)a0;
- (void)removeItemsWithPrefx:(id)a0;
- (void)removeItemForKey:(id)a0;
- (BOOL)hasItemForKey:(id)a0;

@end
