@class NSUUID;

@interface KNRecordingSyncState : NSObject <NSCopying> {
    BOOL _canClearOutOfSyncToken;
}

@property (readonly, nonatomic) NSUUID *outOfSyncToken;
@property (readonly, nonatomic, getter=isRecordingOutOfSync) BOOL recordingOutOfSync;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithArchive:(const struct RecordingSyncState { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct UUID *x4; BOOL x5; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct RecordingSyncState { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct UUID *x4; BOOL x5; } *)a0 archiver:(id)a1;
- (id)initWithOutOfSyncToken:(id)a0 canClearOutOfSyncToken:(BOOL)a1;
- (BOOL)isRecordingLocallyOutOfSyncUsingLocalOutOfSyncToken:(id)a0;
- (id)recordingSyncStateByMarkingRecordingAsOutOfSync:(BOOL)a0 withLocalOutOfSyncToken:(id)a1;

@end
