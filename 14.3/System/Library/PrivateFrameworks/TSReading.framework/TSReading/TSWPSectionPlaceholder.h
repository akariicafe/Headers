@class TSWPStorage, TPDocumentRoot;

@interface TSWPSectionPlaceholder : TSPObject <TSKDocumentObject, TSWPSection> {
    TPDocumentRoot *_documentRoot;
    TSWPStorage *_parentStorage;
}

- (id)initWithContext:(id)a0;
- (id)copyWithContext:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)willBeAddedToDocumentRoot:(id)a0 context:(id)a1;
- (void)wasAddedToDocumentRoot:(id)a0 context:(id)a1;
- (void)willBeRemovedFromDocumentRoot:(id)a0;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (void)adoptStylesheet:(id)a0 withMapper:(id)a1;
- (id)parentStorage;
- (void)setParentStorage:(id)a0;
- (void)i_ensureHeaderFooterStoragesExistWithStylesheet:(id)a0;

@end
