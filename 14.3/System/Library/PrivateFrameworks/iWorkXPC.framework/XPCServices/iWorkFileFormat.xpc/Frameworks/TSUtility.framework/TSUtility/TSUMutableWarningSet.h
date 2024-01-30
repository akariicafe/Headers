@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface TSUMutableWarningSet : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableSet *_warnings;
}

@property (readonly) unsigned long long count;

- (id)init;
- (void).cxx_destruct;
- (void)unionSet:(id)a0;
- (id)initWithSet:(id)a0;
- (void)addWarning:(id)a0;
- (id)warningsPassingTest:(id /* block */)a0;
- (BOOL)containsWarningPassingTest:(id /* block */)a0;
- (id)popAllWarnings;
- (id)popAllWarningsIfContainsWarningPassingTest:(id /* block */)a0;
- (id)warningsOfKind:(long long)a0;
- (BOOL)hasWarningsOfKind:(long long)a0;

@end
