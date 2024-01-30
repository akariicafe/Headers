@interface HMDDataSyncStateLogEvent : HMMLogEvent

@property (readonly) unsigned long long dataSyncState;

- (id)initWithDataSyncState:(unsigned long long)a0;

@end
