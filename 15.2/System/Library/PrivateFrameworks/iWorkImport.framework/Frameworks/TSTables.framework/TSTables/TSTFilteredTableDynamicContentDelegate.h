@class TSTTableInfo, NSString;

@interface TSTFilteredTableDynamicContentDelegate : NSObject <TSTLayoutDynamicContentProtocol>

@property (retain, nonatomic) TSTTableInfo *tableInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
