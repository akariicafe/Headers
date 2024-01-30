@interface PPSQLKVStore : NSObject

+ (void)storeBlob:(id)a0 forKey:(id)a1 transaction:(id)a2;
+ (id)numberForKey:(id)a0 transaction:(id)a1;
+ (id)loadBlobForKey:(id)a0 transaction:(id)a1;
+ (id)stringForKey:(id)a0 transaction:(id)a1;
+ (void)setNumber:(id)a0 forKey:(id)a1 transaction:(id)a2;
+ (void)removeBlobForKey:(id)a0 transaction:(id)a1;
+ (void)setString:(id)a0 forKey:(id)a1 transaction:(id)a2;

@end
