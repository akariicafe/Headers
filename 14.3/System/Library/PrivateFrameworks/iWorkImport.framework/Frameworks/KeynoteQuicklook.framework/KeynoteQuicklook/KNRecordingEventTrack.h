@class NSString, NSArray;

@interface KNRecordingEventTrack : TSPObject

@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSArray *events;

- (void).cxx_destruct;
- (id)description;
- (id)initWithContext:(id)a0 type:(id)a1 events:(id)a2;
- (void)p_slideNodeWasAddedToOrRemovedFromDocument;
- (id)eventTrackByReplacingSegmentAfterTime:(double)a0 withEventTrack:(id)a1;
- (void)slideNodeWasAddedToDocument:(id)a0;
- (void)slideNodeWillBeRemovedFromDocument:(id)a0;
- (void)loadFromArchive:(const struct RecordingEventTrackArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<KN::RecordingEventArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x5; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct RecordingEventTrackArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<KN::RecordingEventArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x5; } *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;

@end
