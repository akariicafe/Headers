@class NSMutableDictionary;

@interface MTIDCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *cache;

+ (BOOL)idInfo:(id)a0 isValidForDate:(id)a1;

- (void)addIDInfo:(id)a0;
- (void)removeNamespaces:(id)a0;
- (void)removeUnsyncedNamespaces;
- (void)removeNamespace:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)IDInfoForScheme:(id)a0 dsId:(id)a1 date:(id)a2;
- (void)removeAllNamespaces;

@end
