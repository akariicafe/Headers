@class NSMutableArray, NSString, HMDWatchSync, HMDPairedSync;

@interface HMDWatchSyncState : HMFObject {
    NSMutableArray *_syncs;
}

@property (readonly, copy, nonatomic) NSString *deviceId;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) HMDWatchSync *currentSync;
@property (readonly, nonatomic) HMDPairedSync *pairedSync;

+ (BOOL)isNewBetter:(unsigned long long)a0 present:(unsigned long long)a1;

- (id)description;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDeviceId:(id)a0 pairedSync:(id)a1;
- (void)addNewSync:(id)a0;
- (BOOL)removeSync;

@end
