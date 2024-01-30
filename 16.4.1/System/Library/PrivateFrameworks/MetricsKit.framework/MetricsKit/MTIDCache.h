@class NSMutableDictionary;

@interface MTIDCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *cache;

+ (BOOL)idInfo:(id)a0 isValidForDate:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)removeNamespace:(id)a0;
- (id)IDInfoForScheme:(id)a0 dsId:(id)a1 date:(id)a2;
- (void)addIDInfo:(id)a0;
- (void)removeAllNamespaces;
- (void)removeNamespaces:(id)a0;
- (void)removeUnsyncedNamespaces;

@end
