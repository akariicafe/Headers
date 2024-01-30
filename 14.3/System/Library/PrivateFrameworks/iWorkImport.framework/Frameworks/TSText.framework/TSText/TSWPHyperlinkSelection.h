@class TSWPHyperlinkField;
@protocol TSWPHyperlinkHostRepProtocol;

@interface TSWPHyperlinkSelection : TSKSelection

@property (readonly, nonatomic) TSWPHyperlinkField *hyperlinkField;
@property (readonly, nonatomic) id<TSWPHyperlinkHostRepProtocol> hyperlinkRep;
@property (nonatomic) BOOL openInEditMode;

+ (Class)archivedSelectionClass;
+ (id)selectionWithHyperlinkField:(id)a0 rep:(id)a1;

- (void).cxx_destruct;
- (id)initWithHyperlinkField:(id)a0 rep:(id)a1;

@end
