@interface TPSRecordPersistenceController : NSObject

+ (void)removeObjectForKey:(id)a0;
+ (void)persistObject:(id)a0 forKey:(id)a1;
+ (id)dataQueue;
+ (void)deleteAllRecordsForPlugin:(id)a0 completion:(id /* block */)a1;
+ (void)deleteRecord:(id)a0 completion:(id /* block */)a1;
+ (void)persistRecord:(id)a0;
+ (id)persistedObjectForKey:(id)a0;

@end
