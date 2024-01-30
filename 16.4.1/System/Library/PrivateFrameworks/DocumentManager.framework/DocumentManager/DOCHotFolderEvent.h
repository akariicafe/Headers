@class NSNumber, NSString, FPItem;

@interface DOCHotFolderEvent : DOCFrecencyBasedEvent

@property (retain, nonatomic) NSNumber *rowId;
@property (copy, nonatomic) NSString *appBundleIdentifier;
@property (copy, nonatomic) FPItem *folderItem;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (id)initWithAppBundleIdentifier:(id)a0 folderItem:(id)a1 type:(unsigned long long)a2 lastUsedDate:(id)a3 frecency:(double)a4;
- (id)initWithRowId:(id)a0 appBundleIdentifier:(id)a1 folderItem:(id)a2 type:(unsigned long long)a3 lastUsedDate:(id)a4 frecency:(double)a5;

@end
