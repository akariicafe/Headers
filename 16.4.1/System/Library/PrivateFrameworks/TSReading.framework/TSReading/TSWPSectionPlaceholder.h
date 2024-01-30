@class TSWPStorage, TPDocumentRoot;

@interface TSWPSectionPlaceholder : TSPObject <TSKDocumentObject, TSWPSection> {
    TPDocumentRoot *_documentRoot;
    TSWPStorage *_parentStorage;
}

- (BOOL)isEqual:(id)a0;
- (id)initWithContext:(id)a0;
- (id)description;
- (id)copyWithContext:(id)a0;
- (void)wasAddedToDocumentRoot:(id)a0 context:(id)a1;
- (void)adoptStylesheet:(id)a0 withMapper:(id)a1;
- (void)i_ensureHeaderFooterStoragesExistWithStylesheet:(id)a0;
- (id)parentStorage;
- (void)setParentStorage:(id)a0;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (void)willBeAddedToDocumentRoot:(id)a0 context:(id)a1;
- (void)willBeRemovedFromDocumentRoot:(id)a0;

@end
