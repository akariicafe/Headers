@class NSLock, NSMutableDictionary;

@interface OITSUDateFormatter_FormatterCache : NSObject {
    NSLock *_dateFormatterCacheLock;
    NSMutableDictionary *_dateFormatterCache;
}

+ (id)dateFormatterStringFromDate:(id)a0 withFormat:(id)a1 locale:(id)a2;

- (void).cxx_destruct;
- (id)init;
- (id)dateFormatterStringFromDate:(id)a0 withFormat:(id)a1 locale:(id)a2;

@end
