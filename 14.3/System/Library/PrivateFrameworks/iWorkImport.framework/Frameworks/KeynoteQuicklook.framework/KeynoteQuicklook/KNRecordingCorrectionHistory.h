@interface KNRecordingCorrectionHistory : NSObject <NSCopying>

@property (readonly, nonatomic) KNRecordingCorrectionHistory *correctionHistoryWithAddedMissingEventsForRadar49654305;
@property (readonly, nonatomic) BOOL didAddMissingEventsForRadar49654305;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)saveToMessage:(struct RecordingCorrectionHistory { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; BOOL x4; } *)a0 archiver:(id)a1;
- (id)initWithMessage:(const struct RecordingCorrectionHistory { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; BOOL x4; } *)a0 unarchiver:(id)a1;

@end
