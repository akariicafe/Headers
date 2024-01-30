@class NSString;

@interface PPECRMessageTermCountsPlugin : NSObject <HVMailConsumer, HVMessagesConsumer> {
    unsigned long long _maxUniqueTokens;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)classLock;
+ (void)reduceUnigramCountSetSizeIfNeeded:(id)a0 maxUniqueTokens:(unsigned long long)a1;

- (void)_sendEvent:(id)a0;
- (id)consumeMessagesContentWithContext:(id)a0;
- (id)deleteDataDerivedFromContentMatchingRequest:(id)a0;
- (id)consumerName;
- (id)initWithMaxUniqueTokens:(unsigned long long)a0;
- (id)consumeMailContentWithContext:(id)a0;
- (void)_updateUnigramCountsFromText:(id)a0 unigramCounts:(id)a1 totalTokenCount:(unsigned long long *)a2;
- (id)generateTermCountsFromUnigramCounts:(id)a0;
- (void)_deleteEventsMatchingTest:(id /* block */)a0;
- (id)init;

@end
