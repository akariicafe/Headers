@interface HMDDataSyncStateLogEvent : HMMLogEvent {
    BOOL _shouldSubmit;
}

@property (nonatomic) unsigned long long dataSyncState;

+ (id)dataSyncStateEstablished:(unsigned long long)a0;

- (BOOL)shouldSubmit;
- (id)initWithDataSyncState:(unsigned long long)a0;
- (id)initWithDataSyncState:(unsigned long long)a0 currentDataSyncContext:(id)a1;

@end
