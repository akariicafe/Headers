@class NSUUID, NSProgress, NSString, NSData;
@protocol SFDownloadStorageUsageMonitorEntryDelegate;

@interface SFDownloadStorageUsageMonitorEntry : NSObject

@property (readonly, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) NSProgress *progress;
@property (retain, nonatomic) id progressSubscriber;
@property (retain, nonatomic) NSString *destinationPath;
@property (retain, nonatomic) NSData *progressData;
@property (nonatomic) long long cachedUsage;
@property (weak, nonatomic) id<SFDownloadStorageUsageMonitorEntryDelegate> delegate;

- (id)initWithIdentifier:(id)a0;
- (void)updateWithDictionaryRepresentation:(id)a0;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_didLoseProgress:(id)a0;
- (void)_didGainProgress:(id)a0;
- (void)_updateProgressSubscriptionWithData:(id)a0;

@end
