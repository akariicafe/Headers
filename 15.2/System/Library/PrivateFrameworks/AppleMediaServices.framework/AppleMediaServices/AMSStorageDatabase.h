@class NSObject, NSString, AMSSQLiteConnection;
@protocol OS_dispatch_queue;

@interface AMSStorageDatabase : NSObject <AMSSQLiteConnectionDelegate>

@property (retain, nonatomic) AMSSQLiteConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic) long long keepAliveCount;
@property (retain, nonatomic) NSString *domain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isFeatureSupported;
+ (id)sharedDatabaseWithDomain:(id)a0;

- (id)_plistValueForData:(id)a0 error:(id *)a1;
- (id)initWithDomain:(id)a0;
- (BOOL)connectionNeedsResetForCorruption:(id)a0;
- (void)close;
- (long long)integerForKey:(id)a0 error:(id *)a1;
- (BOOL)deleteForKey:(id)a0 error:(id *)a1;
- (BOOL)setDouble:(double)a0 forKey:(id)a1 error:(id *)a2;
- (void)_performTransaction:(id /* block */)a0;
- (double)doubleForKey:(id)a0 error:(id *)a1;
- (id)valueForKey:(id)a0 error:(id *)a1;
- (BOOL)setValue:(id)a0 forKey:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (long long)_valueTypeForValue:(id)a0;
- (id)_convertToValueWithData:(id)a0 valueType:(long long)a1 error:(id *)a2;
- (id)_dataForPlistValue:(id)a0 error:(id *)a1;
- (BOOL)_setValueData:(id)a0 valueType:(long long)a1 forKey:(id)a2 error:(id *)a3;
- (BOOL)setInteger:(long long)a0 forKey:(id)a1 error:(id *)a2;
- (id)_cachePath;
- (BOOL)booleanForKey:(id)a0 error:(id *)a1;
- (void)dealloc;
- (id)sizeWithError:(id *)a0;
- (id)allKeyValuesWithError:(id *)a0;
- (id)allKeysForDomain:(id)a0 withError:(id *)a1;
- (id)_convertToDataWithValue:(id)a0 valueType:(long long)a1 error:(id *)a2;
- (BOOL)setBoolean:(BOOL)a0 forKey:(id)a1 error:(id *)a2;

@end
