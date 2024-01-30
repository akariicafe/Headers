@class NSMutableArray, NSString, HMDWatchSync, HMDPairedSync;

@interface HMDWatchSyncState : HMFObject {
    NSMutableArray *_syncs;
}

@property (readonly, copy, nonatomic) NSString *deviceId;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) HMDWatchSync *currentSync;
@property (readonly, nonatomic) HMDPairedSync *pairedSync;

+ (id)resultAsString:(unsigned long long)a0;
+ (id)optionAsString:(unsigned long long)a0;
+ (BOOL)isNewBetter:(unsigned long long)a0 present:(unsigned long long)a1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (BOOL)removeSync;
- (id)initWithDeviceId:(id)a0 pairedSync:(id)a1;
- (void)addNewSync:(id)a0;

@end
