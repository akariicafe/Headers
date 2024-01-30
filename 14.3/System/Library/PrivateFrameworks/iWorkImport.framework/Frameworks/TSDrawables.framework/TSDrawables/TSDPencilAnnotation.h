@class TSDDrawableInfo, NSString, TSDPencilAnnotationStorage, TSKPKDrawing;

@interface TSDPencilAnnotation : TSPObject <TSPCopying, TSKDocumentObject, TSKPencilAnnotation>

@property (retain, nonatomic) TSDPencilAnnotationStorage *pencilAnnotationStorage;
@property (readonly, nonatomic) TSKPKDrawing *drawing;
@property (weak, nonatomic) TSDDrawableInfo *parent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *uuid;

+ (BOOL)needsObjectUUID;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithContext:(id)a0;
- (void)willBeRemovedFromDocumentRoot:(id)a0;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (void)willBeAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)wasAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)loadFromArchive:(const struct PencilAnnotationArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Reference *x4; } *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)initWithContext:(id)a0 pencilAnnotationStorage:(id)a1;

@end
