@interface ICKeychain : NSObject

+ (BOOL)deleteItemsForIdentifier:(id)a0 account:(id)a1 error:(id *)a2;
+ (BOOL)isSyncAvailableForAccount:(id)a0;
+ (id)accessControlObjectWithProtection:(void *)a0 flags:(unsigned long long)a1 error:(id *)a2;
+ (BOOL)booleanForIdentifier:(id)a0 account:(id)a1;
+ (id)dataForIdentifier:(id)a0 account:(id)a1;
+ (id)dataForIdentifier:(id)a0 account:(id)a1 authenticationContext:(id)a2;
+ (id)dataForIdentifier:(id)a0 account:(id)a1 isSynced:(BOOL)a2 authenticationContext:(id)a3;
+ (BOOL)deleteEverythingWithError:(id *)a0;
+ (BOOL)deleteItemsForIdentifier:(id)a0 account:(id)a1 isSynced:(BOOL)a2 error:(id *)a3;
+ (BOOL)deleteItemsOfType:(unsigned long long)a0 account:(id)a1 error:(id *)a2;
+ (BOOL)deleteItemsOfType:(unsigned long long)a0 account:(id)a1 isSynced:(BOOL)a2 error:(id *)a3;
+ (BOOL)hasItemForIdentifier:(id)a0 account:(id)a1;
+ (id)itemsOfType:(unsigned long long)a0 account:(id)a1 authenticationContext:(id)a2;
+ (id)itemsOfType:(unsigned long long)a0 account:(id)a1 isSynced:(BOOL)a2 authenticationContext:(id)a3;
+ (id)queryForItemClass:(id)a0 forIdentifier:(id)a1 account:(id)a2 isSynced:(BOOL)a3 type:(unsigned long long)a4 authenticationContext:(id)a5 returnData:(BOOL)a6 limit:(id)a7;
+ (BOOL)setBoolean:(BOOL)a0 forIdentifier:(id)a1 account:(id)a2 shouldSync:(BOOL)a3 error:(id *)a4;
+ (BOOL)setData:(id)a0 forIdentifier:(id)a1 account:(id)a2 error:(id *)a3;
+ (BOOL)setData:(id)a0 forIdentifier:(id)a1 account:(id)a2 shouldSync:(BOOL)a3 error:(id *)a4;
+ (BOOL)setData:(id)a0 forIdentifier:(id)a1 account:(id)a2 type:(unsigned long long)a3 shouldSync:(BOOL)a4 accessFlags:(unsigned long long)a5 accessGroup:(id)a6 error:(id *)a7;
+ (BOOL)setString:(id)a0 forIdentifier:(id)a1 account:(id)a2 shouldSync:(BOOL)a3 error:(id *)a4;
+ (BOOL)setUnsignedInteger:(unsigned long long)a0 forIdentifier:(id)a1 account:(id)a2 shouldSync:(BOOL)a3 error:(id *)a4;
+ (id)stringForIdentifier:(id)a0 account:(id)a1 isSynced:(BOOL)a2;
+ (unsigned long long)unsignedIntegerForIdentifier:(id)a0 account:(id)a1;

@end
