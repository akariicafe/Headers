@class NSString, NSDate;

@interface TIMobileAssetSyncState : NSObject {
    BOOL _loadedState;
}

@property (nonatomic) long long status;
@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSString *buildVersion;
@property (nonatomic) long long attemptCount;

+ (id)buildVersionString;

- (void)saveState;
- (void)updateState;
- (void).cxx_destruct;
- (void)loadStateIfNecessary;
- (BOOL)shouldSyncToRemoteMetadata;
- (void)didSyncToRemoteMetadataWithError:(id)a0;
- (id)initWithDate:(id)a0 buildVersion:(id)a1 status:(long long)a2 attemptCount:(long long)a3;

@end
