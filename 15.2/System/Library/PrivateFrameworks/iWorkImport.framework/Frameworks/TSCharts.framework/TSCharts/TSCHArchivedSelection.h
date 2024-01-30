@class NSString, TSCHSelection;

@interface TSCHArchivedSelection : TSPObject <TSKArchivedSelection>

@property (retain, nonatomic) TSCHSelection *selection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
