@class NSArray, NSMutableDictionary;

@interface GEOCacheUsageMonitor_TileCacheData : NSObject {
    NSMutableDictionary *_errorsDict;
}

@property (nonatomic) unsigned int count;
@property (nonatomic) unsigned int byteCount;
@property (readonly, nonatomic) NSArray *errors;

- (id)init;
- (BOOL)wouldWrapWithByteCount:(unsigned int)a0;
- (void)addErrorWithDomain:(id)a0 code:(long long)a1;
- (void).cxx_destruct;

@end
