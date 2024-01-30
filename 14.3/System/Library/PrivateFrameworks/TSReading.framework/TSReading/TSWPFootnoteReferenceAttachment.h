@class NSString, TSWPStorage;

@interface TSWPFootnoteReferenceAttachment : TSWPTextualAttachment

@property (retain, nonatomic) TSWPStorage *containedStorage;
@property (retain, nonatomic) NSString *customMarkString;

- (BOOL)isSearchable;
- (id)initWithContext:(id)a0;
- (void)dealloc;
- (id)copyWithContext:(id)a0;
- (int)elementKind;
- (BOOL)isEqual:(id)a0;
- (void)checkDebug;
- (unsigned long long)findCharIndex;
- (void)willBeAddedToDocumentRoot:(id)a0 context:(id)a1;
- (void)wasAddedToDocumentRoot:(id)a0 context:(id)a1;
- (void)willBeRemovedFromDocumentRoot:(id)a0;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (void)adoptStylesheet:(id)a0 withMapper:(id)a1;
- (void)setParentStorage:(id)a0;
- (id)stringEquivalent;
- (id)initWithContext:(id)a0 wpStorage:(id)a1;
- (void)applyMark;
- (void)setContainedStorageParentInfoToStorage:(id)a0;

@end
