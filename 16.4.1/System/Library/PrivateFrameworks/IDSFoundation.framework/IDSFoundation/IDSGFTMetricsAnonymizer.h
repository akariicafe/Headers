@class NSMutableDictionary;

@interface IDSGFTMetricsAnonymizer : NSObject {
    unsigned long long _nextAnonymizedID;
    NSMutableDictionary *_assignedIDs;
}

- (id)init;
- (void).cxx_destruct;
- (id)anonymizeID:(id)a0;

@end
