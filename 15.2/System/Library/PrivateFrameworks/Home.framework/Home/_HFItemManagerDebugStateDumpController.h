@class NSHashTable;

@interface _HFItemManagerDebugStateDumpController : NSObject

@property (retain, nonatomic) NSHashTable *itemManagers;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)registerItemManager:(id)a0;
- (id)_performStateDump;

@end
