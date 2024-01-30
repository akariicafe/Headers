@class TSDInfoHyperlinkSelection, NSString, TSKSelection;

@interface TSDArchivedInfoHyperlinkSelection : TSPObject <TSKArchivedSelection>

@property (retain, nonatomic) TSDInfoHyperlinkSelection *hyperlinkSelection;
@property (retain, nonatomic) TSKSelection *selection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
