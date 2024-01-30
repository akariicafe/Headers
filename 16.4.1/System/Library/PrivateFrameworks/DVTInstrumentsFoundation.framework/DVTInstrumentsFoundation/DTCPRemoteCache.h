@interface DTCPRemoteCache : NSObject {
    id *_locks;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)kindToString:(long long)a0;
+ (id)sharedDTCPRemoteCache;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (id)_directoryForDevice:(id)a0;
- (id)_filePathForKind:(long long)a0 fileType:(id)a1 directoryURL:(id)a2;
- (BOOL)accessFileKind:(long long)a0 device:(id)a1 fileType:(id)a2 block:(id /* block */)a3;

@end
