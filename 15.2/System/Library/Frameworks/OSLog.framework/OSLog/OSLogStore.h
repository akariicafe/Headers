@class OSLogEventSource;

@interface OSLogStore : NSObject {
    OSLogEventSource *_source;
    int _constraint;
}

+ (id)storeWithScope:(long long)a0 error:(id *)a1;
+ (id)storeWithURL:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)init;
- (id)initForFactory;
- (id)_constrainedEntriesEnumeratorWithOptions:(unsigned long long)a0 position:(id)a1 predicate:(id)a2 error:(id *)a3;
- (id)entriesEnumeratorWithOptions:(unsigned long long)a0 position:(id)a1 predicate:(id)a2 error:(id *)a3;
- (id)entriesEnumeratorAndReturnError:(id *)a0;
- (id)positionWithDate:(id)a0;
- (id)positionWithTimeIntervalSinceEnd:(double)a0;
- (id)positionWithTimeIntervalSinceLatestBoot:(double)a0;

@end
