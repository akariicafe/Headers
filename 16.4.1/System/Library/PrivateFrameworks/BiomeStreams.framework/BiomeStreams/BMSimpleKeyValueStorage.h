@class NSURL, BMFileManager, NSObject;
@protocol OS_dispatch_queue;

@interface BMSimpleKeyValueStorage : NSObject <BMKeyValueStorage>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) BMFileManager *fileManager;

- (id)initWithURL:(id)a0;
- (void)deleteValueForKey:(id)a0;
- (void).cxx_destruct;
- (void)_deleteValueForKey:(id)a0;
- (id)_fetchValueForKey:(id)a0;
- (void)_insertValue:(id)a0 forKey:(id)a1;
- (id)fetchValueForKey:(id)a0;
- (void)insertValue:(id)a0 forKey:(id)a1;
- (id)readDictionary;
- (void)storeDictionary:(id)a0;

@end
