@class NSString;

@interface SXJSONDataTableCellSelector : SXJSONDataTableSelector <SXDataTableCellSelector>

@property (readonly, nonatomic) unsigned long long evenRows;
@property (readonly, nonatomic) unsigned long long oddRows;
@property (readonly, nonatomic) unsigned long long evenColumns;
@property (readonly, nonatomic) unsigned long long oddColumns;
@property (readonly, nonatomic) unsigned long long rowIndex;
@property (readonly, nonatomic) unsigned long long columnIndex;
@property (readonly, nonatomic) NSString *descriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)weightForSelectorKey:(id)a0;

@end
