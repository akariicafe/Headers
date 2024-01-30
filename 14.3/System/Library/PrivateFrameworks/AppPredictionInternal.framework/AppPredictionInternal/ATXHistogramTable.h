@class NSMutableDictionary, NSMutableIndexSet, _ATXDataStore, ATXBackgroundSaver, NSObject;
@protocol NSCopying;

@interface ATXHistogramTable : NSObject <NSSecureCoding> {
    struct HTGuardedData { NSMutableDictionary *dict; NSMutableIndexSet *usedIds; NSObject<NSCopying> *prevKey; unsigned short prevEventId; } _private_unsafeGuardedData;
    struct unique_ptr<proactive::pas::SynchronizedObject<(anonymous namespace)::HTGuardedData, proactive::pas::detail::RecursiveMutex>, std::__1::default_delete<proactive::pas::SynchronizedObject<(anonymous namespace)::HTGuardedData, proactive::pas::detail::RecursiveMutex> > > { struct __compressed_pair<proactive::pas::SynchronizedObject<(anonymous namespace)::HTGuardedData, proactive::pas::detail::RecursiveMutex> *, std::__1::default_delete<proactive::pas::SynchronizedObject<(anonymous namespace)::HTGuardedData, proactive::pas::detail::RecursiveMutex> > > { struct SynchronizedObject<(anonymous namespace)::HTGuardedData, proactive::pas::detail::RecursiveMutex> *__value_; } __ptr_; } _guardedData;
    _ATXDataStore *_datastore;
    ATXBackgroundSaver *_saver;
    long long _blobType;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (unsigned short)remove:(id)a0;
- (void)clear;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDatastore:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)flush;
- (id)allKeys;
- (id).cxx_construct;
- (unsigned short)intern:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)allKeysFilteredBy:(id /* block */)a0;
- (BOOL)lookup:(id)a0 into:(unsigned short *)a1;
- (id)initWithDict:(id)a0 usedIds:(id)a1 datastore:(id)a2 blobType:(long long)a3;
- (id)initWithDatastore:(id)a0 blobType:(long long)a1;
- (id)histogramTableDict;

@end
