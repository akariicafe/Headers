@class NSString, TSWPStorage, TSKPKDrawing;
@protocol TSKPencilAnnotationStorage;

@interface TSWPPencilAnnotation : TSPObject <TSPCopying, TSKDocumentObject, TSWPTextSpanningObject, TSWPOverlappingField, TSKPencilAnnotation>

@property (retain, nonatomic) id<TSKPencilAnnotationStorage> pencilAnnotationStorage;
@property (weak, nonatomic) TSWPStorage *parentStorage;
@property (readonly, nonatomic) NSString *textAttributeUUIDString;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) TSKPKDrawing *drawing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithContext:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)willBeRemovedFromDocumentRoot:(id)a0;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (void)willBeAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)wasAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)loadFromArchive:(const struct PencilAnnotationArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct Reference *x5; } *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (BOOL)isInDocument;
- (id)initWithContext:(id)a0 pencilAnnotationStorage:(id)a1;
- (BOOL)isEquivalentToObject:(id)a0;
- (void)resetTextAttributeUUIDString;
- (void)i_setTextAttributeUUIDString:(id)a0;

@end
