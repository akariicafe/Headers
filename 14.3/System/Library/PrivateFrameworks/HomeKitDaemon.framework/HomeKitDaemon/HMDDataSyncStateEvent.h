@interface HMDDataSyncStateEvent : HMDLogEvent

@property (nonatomic) unsigned long long dataSyncState;

+ (id)uuid;
+ (id)dataSyncStateEstablished:(unsigned long long)a0;

- (id)initWithDataSyncState:(unsigned long long)a0;

@end
