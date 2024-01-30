@class NSString;
@protocol DNDSBackingStoreRecord, DNDSBackingStore, DNDSBackingStoreDelegate;

@interface DNDSMemoryCachedBackingStore : NSObject <DNDSBackingStoreDelegate, DNDSBackingStore> {
    id<DNDSBackingStore> _underlyingBackingStore;
    id<DNDSBackingStoreRecord> _cache;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<DNDSBackingStoreDelegate> delegate;

- (void).cxx_destruct;
- (id)backingStore:(id)a0 migrateDictionaryRepresentation:(id)a1 fromVersionNumber:(unsigned long long)a2 toVersionNumber:(unsigned long long)a3;
- (id)readRecordWithError:(id *)a0;
- (unsigned long long)writeRecord:(id)a0 error:(id *)a1;
- (id)initWithUnderlyingBackingStore:(id)a0;

@end
