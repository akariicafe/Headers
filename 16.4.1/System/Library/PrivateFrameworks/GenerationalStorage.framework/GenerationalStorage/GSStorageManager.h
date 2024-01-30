@interface GSStorageManager : NSObject

+ (void)initialize;
+ (id)manager;
+ (BOOL)_isPermanentStorageSupportedForFD:(int)a0 error:(id *)a1;
+ (BOOL)_isPermanentStorageSupportedForStatFSInfo:(struct statfs { unsigned int x0; int x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; struct fsid { int x0[2]; } x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; char x12[16]; char x13[1024]; char x14[1024]; unsigned int x15; unsigned int x16[7]; } *)a0 error:(id *)a1;

- (id)additionForItemAtURL:(id)a0 forPersistentIdentifier:(id)a1 error:(id *)a2;
- (BOOL)isPermanentStorageSupportedAtURL:(id)a0 error:(id *)a1;
- (id)permanentStorageForItemAtURL:(id)a0 allocateIfNone:(BOOL)a1 error:(id *)a2;
- (id)persistentIdentifierInStorage:(id)a0 forAdditionNamed:(id)a1 inNameSpace:(id)a2;
- (BOOL)removeTemporaryStorage:(id)a0 error:(id *)a1;
- (id)temporaryStorageForItemAtURL:(id)a0 locatedAtURL:(id)a1 error:(id *)a2;
- (BOOL)isItemAtURLInsidePermanentStorage:(id)a0 error:(id *)a1;
- (BOOL)mayPermanentStorageBeSupportedAtURL:(id)a0 error:(id *)a1;
- (BOOL)deallocateDocumentIDOfItemAtURL:(id)a0 error:(id *)a1;
- (void)_connectionWithDaemonWasLost;
- (BOOL)isItemAtURLValidInsidePermanentStorage:(id)a0 error:(id *)a1;
- (BOOL)mayPermanentStorageBeSupportedWithFD:(int)a0 error:(id *)a1;
- (id)stagingPrefixForDocumentID:(id)a0;

@end
