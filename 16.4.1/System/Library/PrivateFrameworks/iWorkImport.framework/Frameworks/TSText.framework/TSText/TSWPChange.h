@class NSString, TSWPStorage, TSWPChangeSession, NSDate, TSUColor;

@interface TSWPChange : TSPObject <TSKDocumentObject, TSPCopying, TSWPTextSpanningObject> {
    TSWPChangeSession *_session;
    NSDate *_date;
    NSString *_textAttributeUUIDString;
}

@property (weak, nonatomic) TSWPStorage *parentStorage;
@property (retain, nonatomic) TSWPChangeSession *session;
@property (copy, nonatomic) NSDate *date;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic) int kind;
@property (readonly, nonatomic) BOOL isInsertion;
@property (readonly, nonatomic) BOOL isDeletion;
@property (readonly, nonatomic) BOOL showsMarkup;
@property (readonly, nonatomic) BOOL showsHiddenDeletionMarkup;
@property (readonly, nonatomic) TSUColor *textMarkupColor;
@property (readonly, nonatomic) TSUColor *changeAdornmentsColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *textAttributeUUIDString;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)copyWithContext:(id)a0;
- (void)adoptStylesheet:(id)a0 withMapper:(id)a1;
- (BOOL)canMergeWithKind:(int)a0 session:(id)a1;
- (id)initWithContext:(id)a0 kind:(int)a1 session:(id)a2;
- (BOOL)isFromChangeSession:(id)a0;
- (void)trackedTextDidChange;
- (void)wasAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (void)willBeAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)willBeRemovedFromDocumentRoot:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (void)i_setTextAttributeUUIDString:(id)a0;
- (BOOL)isEquivalentToObject:(id)a0;
- (void)migrateWithDocumentRoot:(id)a0;
- (void)p_invalidateAnnotationResultsForDocumentRoot:(id)a0 key:(id)a1;
- (void)resetTextAttributeUUIDString;

@end
