@class NSString, NSArray;

@interface STStoragePlugin : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSArray *tips;

- (void).cxx_destruct;
- (id)documentAppIdentifiers;
- (id)documentSpecifiersForApp:(id)a0;
- (id)externDataSizeAppIdentifiers;
- (long long)externDataSizeForApp:(id)a0;
- (void)notifyUsageChanged;
- (void)reloadTips;

@end
