@class NSString, TSTTableModel;

@interface TSTFilteredTableDynamicContentDelegate : NSObject <TSTLayoutDynamicContentProtocol> {
    TSTTableModel *mTableModel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
