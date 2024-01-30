@class TSWPSelection, NSString;

@interface TSWPArchivedSelection : TSPObject <TSKArchivedSelection>

@property (retain, nonatomic) TSWPSelection *selection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
