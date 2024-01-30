@interface _NSXPCStoreUtilities : NSObject

+ (id)encodableTokenForStore:(id)a0 queryGenerationToken:(id)a1;
+ (id)classesForErrorArchive;
+ (id)_decodeBufferResultSetData:(id)a0 forFetchRequest:(id)a1 options:(unsigned long long)a2 store:(id)a3 context:(id)a4 rowCacheRows:(id *)a5 error:(id *)a6;
+ (id)newUserInfoFromException:(id)a0;
+ (void)logMessage:(id)a0 forComponent:(id)a1;
+ (id)_decodeResultSetData:(id)a0 forFetchRequest:(id)a1 options:(unsigned long long)a2 store:(id)a3 context:(id)a4 rowCacheRows:(id *)a5 error:(id *)a6;
+ (id)newSecureArchivedDataWithRootObject:(id)a0;
+ (id)classesForFetchArchive;
+ (id)decodeSecureArchivedData:(id)a0 usingDelegate:(id)a1 classes:(id)a2;
+ (id)classesForSaveArchive;

@end
