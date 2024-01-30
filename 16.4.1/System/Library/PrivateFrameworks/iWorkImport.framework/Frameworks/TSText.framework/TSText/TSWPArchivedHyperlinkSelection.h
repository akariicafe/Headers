@class TSKSelection, NSString, TSWPHyperlinkSelection;

@interface TSWPArchivedHyperlinkSelection : TSPObject <TSKArchivedSelection>

@property (retain, nonatomic) TSWPHyperlinkSelection *hyperlinkSelection;
@property (retain, nonatomic) TSKSelection *selection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
