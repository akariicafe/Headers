@class NSLock, NSMutableDictionary;

@interface TSUDateFormatter_FormatterCache : NSObject {
    NSLock *_dateFormatterCacheLock;
    NSMutableDictionary *_dateFormatterCache;
}

+ (id)dateFormatterStringFromDate:(id)a0 withFormat:(id)a1 locale:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (id)dateFormatterStringFromDate:(id)a0 withFormat:(id)a1 locale:(id)a2;

@end
