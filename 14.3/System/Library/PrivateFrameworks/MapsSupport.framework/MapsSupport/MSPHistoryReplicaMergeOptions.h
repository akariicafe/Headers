@class NSString, NSDate;

@interface MSPHistoryReplicaMergeOptions : NSObject <MSPHistoryReplicaMergeOptions>

@property (readonly) NSDate *earliestKnownSyncDate;
@property (readonly) long long modificationDatePolicy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithEarliestKnownSyncDate:(id)a0 modificationDatePolicy:(long long)a1;

@end
