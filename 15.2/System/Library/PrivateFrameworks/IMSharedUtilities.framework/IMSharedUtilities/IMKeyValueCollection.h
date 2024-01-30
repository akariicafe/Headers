@class NSString, NSMutableDictionary;
@protocol IMKeyValueCollectionDelegate, IMKeyValueCollectionStorage;

@interface IMKeyValueCollection : NSObject <IMKeyValueCollectionStorage, NSCopying> {
    long long _batchCount;
}

@property (readonly) NSMutableDictionary *recordedChanges;
@property (readonly, nonatomic) id<IMKeyValueCollectionStorage> keyValueStorage;
@property (weak, nonatomic) id<IMKeyValueCollectionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setObject:(id)a0 forKey:(id)a1;
- (void)setDouble:(double)a0 forKey:(id)a1;
- (void)addErrorToArray:(id)a0 forKey:(id)a1;
- (id)errorArrayForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (long long)integerForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setInteger:(long long)a0 forKey:(id)a1;
- (void)setString:(id)a0 forKey:(id)a1;
- (id)stringForKey:(id)a0;
- (double)doubleForKey:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)objectForKey:(id)a0;
- (void)_notifyListeners;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithKeyValueStorage:(id)a0;
- (void)_recordChange:(id)a0 forKey:(id)a1;
- (void)_broadcastIfNeeded;
- (id)objectForKey:(id)a0 withDefault:(id)a1;
- (BOOL)boolForKey:(id)a0 withDefault:(BOOL)a1;
- (long long)integerForKey:(id)a0 withDefault:(long long)a1;
- (long long)int64ForKey:(id)a0 withDefault:(long long)a1;
- (unsigned long long)uint64ForKey:(id)a0 withDefault:(unsigned long long)a1;
- (double)doubleForKey:(id)a0 withDefault:(double)a1;
- (void)_startBatchWrite;
- (id)stringForKey:(id)a0 withDefault:(id)a1;
- (void)_commitBatchWrite;
- (long long)int64ForKey:(id)a0;
- (void)setInt64:(long long)a0 forKey:(id)a1;
- (unsigned long long)uint64ForKey:(id)a0;
- (void)setUint64:(long long)a0 forKey:(id)a1;
- (BOOL)boolForKey:(id)a0;
- (void)setError:(id)a0 forKey:(id)a1;
- (id)errorForKey:(id)a0;

@end
