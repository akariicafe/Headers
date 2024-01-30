@class NSMutableDictionary, NSObject;
@protocol KVSkitReadAccess;

@interface KVSkitReaderFactory : NSObject <KVSkitAccessProvider> {
    NSObject<KVSkitReadAccess> *_cachedLocalReader;
    NSMutableDictionary *_cachedRemoteReaders;
}

+ (id)_rootDirectoryURL;

- (BOOL)supportsMultiUser;
- (id)accessReadOnlySkitForUser:(id)a0;
- (id)init;
- (BOOL)setItems:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)_provideAccess:(id)a0 forUser:(id)a1;

@end
