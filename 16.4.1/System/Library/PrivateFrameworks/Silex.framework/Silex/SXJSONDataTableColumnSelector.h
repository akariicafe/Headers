@class NSString;

@interface SXJSONDataTableColumnSelector : SXJSONDataTableSelector <SXDataTableColumnSelector>

@property (readonly, nonatomic) unsigned long long even;
@property (readonly, nonatomic) unsigned long long odd;
@property (readonly, nonatomic) unsigned long long rowIndex;
@property (readonly, nonatomic) unsigned long long columnIndex;
@property (readonly, nonatomic) NSString *descriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)evenWithValue:(id)a0 withType:(int)a1;
- (unsigned long long)oddWithValue:(id)a0 withType:(int)a1;
- (unsigned long long)weightForSelectorKey:(id)a0;

@end
