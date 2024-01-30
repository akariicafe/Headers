@class NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface BMSimpleKeyValueStorage : NSObject <BMKeyValueStorage>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSURL *url;

- (void)_insertValue:(id)a0 forKey:(id)a1;
- (id)initWithURL:(id)a0;
- (id)dictionaryAtURL:(id)a0;
- (id)fetchValueForKey:(id)a0;
- (void).cxx_destruct;
- (void)insertValue:(id)a0 forKey:(id)a1;
- (id)_fetchValueForKey:(id)a0;
- (void)_deleteValueForKey:(id)a0;
- (void)storeDictionary:(id)a0;
- (void)deleteValueForKey:(id)a0;

@end
