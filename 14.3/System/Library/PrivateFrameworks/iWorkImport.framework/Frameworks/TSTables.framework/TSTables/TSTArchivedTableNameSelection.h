@class NSString, TSTTableNameSelection;

@interface TSTArchivedTableNameSelection : TSPObject <TSKArchivedSelection>

@property (retain, nonatomic) TSTTableNameSelection *selection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
