@class NSString, TSWPStorage, TSDCommentStorage, NSDate, TSKAnnotationAuthor;

@interface TSWPHighlight : TSPObject <TSDComment, TSPCopying, TSKDocumentObject, TSWPTextSpanningObject, TSWPOverlappingField>

@property (copy, nonatomic) NSString *textAttributeUUIDString;
@property (retain, nonatomic) TSDCommentStorage *commentStorage;
@property (weak, nonatomic) TSWPStorage *parentStorage;
@property (copy, nonatomic) TSDCommentStorage *storage;
@property (readonly, nonatomic) BOOL isHighlight;
@property (readonly, nonatomic) NSString *annotationUUID;
@property (readonly, nonatomic) int annotationType;
@property (retain, nonatomic) TSKAnnotationAuthor *author;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) int annotationDisplayStringType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)highlightTextColorForHighlights:(id)a0;
+ (id)defaultHighlightWithContext:(id)a0 includeCommentWithAuthor:(id)a1;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithContext:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)willBeRemovedFromDocumentRoot:(id)a0;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (void)willBeAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)wasAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)loadFromArchive:(const struct HighlightArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct Reference *x5; } *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (BOOL)isInDocument;
- (void)commentWillBeAddedToDocumentRoot;
- (BOOL)isFloatingComment;
- (BOOL)isEquivalentToObject:(id)a0;
- (void)resetTextAttributeUUIDString;
- (void)i_setTextAttributeUUIDString:(id)a0;
- (BOOL)isCommentEmpty;
- (void)p_invalidateAnnotationResultsForDocumentRoot:(id)a0 key:(id)a1;
- (id)initWithContext:(id)a0 commentStorage:(id)a1;
- (id)initWithContext:(id)a0 commentStorage:(id)a1 annotationUUID:(id)a2;

@end
