@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_source, OS_dispatch_workloop;

@interface BRCFairScheduler : NSObject {
    NSObject<OS_dispatch_source> *_source;
    NSObject<OS_dispatch_workloop> *_workloop;
    NSString *_name;
    unsigned long long _maxRegistedSourceBit;
    unsigned long long _lastVisitedBit;
    NSMutableDictionary *_sourceForBitIndex;
    BOOL _resumed;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_workloop> *workloop;

- (void)schedule;
- (void)suspend;
- (void)cancel;
- (void)dealloc;
- (void)close;
- (void).cxx_destruct;
- (void)resume;
- (void)addSource:(id)a0;
- (id)initWithWorkloop:(id)a0 name:(id)a1;
- (void)signalSourceForBitIndex:(unsigned long long)a0;
- (id)sourceForBitIndex:(unsigned long long)a0;
- (void)unregisterSources;

@end
