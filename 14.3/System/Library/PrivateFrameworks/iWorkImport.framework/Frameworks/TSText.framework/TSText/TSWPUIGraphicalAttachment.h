@interface TSWPUIGraphicalAttachment : TSWPAttachment

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) double baselineOffset;

- (unsigned int)elementKind;
- (void)invalidate;
- (id)rendererForAttachment;
- (BOOL)wantsSelectionAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)loadFromArchive:(const struct UIGraphicalAttachment { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct UIGraphicalAttachment { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; } *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;

@end
