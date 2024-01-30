@interface IMDCoreSpotlightReindexer : NSObject {
    void /* unknown type, empty encoding */ index;
    void /* unknown type, empty encoding */ deferralTime;
    void /* unknown type, empty encoding */ handles;
    void /* unknown type, empty encoding */ messageAge;
}

- (id)init;
- (void).cxx_destruct;
- (void)reindex;
- (id)initWithHandles:(id)a0 batchDeferralTime:(long long)a1 messageAge:(double)a2 index:(id)a3;

@end
