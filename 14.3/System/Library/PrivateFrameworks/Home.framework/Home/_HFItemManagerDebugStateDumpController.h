@class NSHashTable;

@interface _HFItemManagerDebugStateDumpController : NSObject

@property (retain, nonatomic) NSHashTable *itemManagers;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)registerItemManager:(id)a0;
- (id)_performStateDump;

@end
