@interface TPSRecordPersistenceController : NSObject

+ (id)dataQueue;
+ (void)removeObjectForKey:(id)a0;
+ (void)persistObject:(id)a0 forKey:(id)a1;
+ (id)persistedObjectForKey:(id)a0;
+ (void)persistRecord:(id)a0;
+ (void)deleteRecord:(id)a0 completion:(id /* block */)a1;
+ (void)deleteAllRecordsForPlugin:(id)a0 completion:(id /* block */)a1;

@end
