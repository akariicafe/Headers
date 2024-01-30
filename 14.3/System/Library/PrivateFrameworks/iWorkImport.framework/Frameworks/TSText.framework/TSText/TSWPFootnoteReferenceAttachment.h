@class NSString, TSWPStorage;

@interface TSWPFootnoteReferenceAttachment : TSWPTextualAttachment

@property (retain, nonatomic) TSWPStorage *containedStorage;
@property (copy, nonatomic) NSString *customMarkString;

- (BOOL)isSearchable;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)copyWithContext:(id)a0;
- (unsigned long long)hash;
- (unsigned int)elementKind;
- (BOOL)isEqual:(id)a0;
- (id)childEnumerator;
- (void)checkDebug;
- (unsigned long long)findCharIndex;
- (void)willBeRemovedFromDocumentRoot:(id)a0;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (void)adoptStylesheet:(id)a0 withMapper:(id)a1;
- (void)setParentStorage:(id)a0;
- (id)stringEquivalent;
- (BOOL)shouldArchiveStringEquivalent;
- (id)initWithContext:(id)a0 wpStorage:(id)a1;
- (void)applyMark;
- (void)setContainedStorageParentInfoToStorage:(id)a0;
- (void)willBeAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)wasAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)objectsForStyleMigrating;
- (BOOL)supportsUUID;

@end
