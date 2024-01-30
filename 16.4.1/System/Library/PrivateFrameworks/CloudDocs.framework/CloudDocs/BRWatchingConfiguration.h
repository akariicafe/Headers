@class NSString, NSDictionary, NSMutableArray, FPItemID;

@interface BRWatchingConfiguration : NSObject {
    NSDictionary *_appLibraryIDToURLMapOfSuppliedAppIDs;
    NSDictionary *_appLibraryIDToURLMapOfSuppliedURLs;
    FPItemID *_trashItemID;
}

@property (readonly, nonatomic) unsigned long long watchTypes;
@property (readonly, nonatomic) NSMutableArray *appLibraryIDs;
@property (readonly, nonatomic) NSMutableArray *urls;
@property (readonly, nonatomic) NSString *gatherPrefix;

- (void).cxx_destruct;
- (id)appLibraryIDToURLMapOfSuppliedAppIDs;
- (id)appLibraryIDToURLMapOfSuppliedURLs;
- (id)centralizedTrashItemID;
- (id)initWithScopes:(id)a0 predicate:(id)a1;

@end
