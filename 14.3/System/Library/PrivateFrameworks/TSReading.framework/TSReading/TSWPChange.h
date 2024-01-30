@class TSWPStorage, TSWPChangeSession, NSDate, TSUColor;

@interface TSWPChange : TSPObject <TSKDocumentObject, TSPCopying> {
    int _kind;
    TSWPChangeSession *_session;
    NSDate *_date;
    BOOL _hidden;
}

@property (nonatomic) TSWPStorage *parentStorage;
@property (retain, nonatomic) TSWPChangeSession *session;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic) BOOL isInsertion;
@property (readonly, nonatomic) BOOL isDeletion;
@property (readonly, nonatomic) BOOL showsMarkup;
@property (readonly, nonatomic) BOOL showsHiddenDeletionMarkup;
@property (readonly, nonatomic) TSUColor *textMarkupColor;
@property (readonly, nonatomic) TSUColor *changeAdornmentsColor;

- (void)dealloc;
- (id)copyWithContext:(id)a0;
- (void)willBeAddedToDocumentRoot:(id)a0 context:(id)a1;
- (void)wasAddedToDocumentRoot:(id)a0 context:(id)a1;
- (void)willBeRemovedFromDocumentRoot:(id)a0;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (void)adoptStylesheet:(id)a0 withMapper:(id)a1;
- (BOOL)canMergeWithKind:(int)a0 session:(id)a1;
- (id)initWithContext:(id)a0 kind:(int)a1 session:(id)a2;
- (void)trackedTextDidChange;
- (void)p_invalidateAnnotationResultsForDocumentRoot:(id)a0;
- (BOOL)isFromChangeSession:(id)a0;

@end
