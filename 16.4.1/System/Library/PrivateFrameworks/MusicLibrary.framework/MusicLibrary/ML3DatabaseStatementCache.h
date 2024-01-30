@class NSMutableDictionary, ML3StatementCacheList;

@interface ML3DatabaseStatementCache : NSObject {
    NSMutableDictionary *_statementsDictionary;
    ML3StatementCacheList *_nodeList;
}

@property (readonly, nonatomic) unsigned long long cacheSize;

- (void)clearCache;
- (id)cachedStatementForSQL:(id)a0;
- (void)dealloc;
- (void)cacheStatement:(id)a0;
- (id)allStatements;
- (id)initWithCacheSize:(unsigned long long)a0;
- (void).cxx_destruct;

@end
