@class NSNumber, NSDictionary, NSDate;

@interface ICMutableRadioPlaybackHistoryItem : ICRadioPlaybackHistoryItem

@property (copy, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSNumber *pauseTime;
@property (copy, nonatomic) NSDictionary *serverTrackInfo;
@property (copy, nonatomic) NSDate *skipDate;
@property (nonatomic) long long storeIdentifier;

- (void)setExpirationDate:(id)a0;
- (void)setPauseTime:(id)a0;
- (void)setServerTrackInfo:(id)a0;
- (void)setSkipDate:(id)a0;
- (void)setStoreIdentifier:(long long)a0;

@end
