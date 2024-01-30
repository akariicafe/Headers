@class NSString;
@protocol GEOConfigStorageReadOnly;

@interface GEOConfigStorageReadWriteAdapter : NSObject <GEOConfigStorageReadWrite> {
    id<GEOConfigStorageReadOnly> _storage;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setConfigValue:(id)a0 forKey:(id)a1 options:(unsigned long long)a2 synchronous:(BOOL)a3;
- (void)resync;
- (id)initWithStorage:(id)a0;
- (void).cxx_destruct;
- (id)getConfigValueForKey:(id)a0 countryCode:(id)a1 options:(unsigned long long)a2 source:(long long *)a3;

@end
