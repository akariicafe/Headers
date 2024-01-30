@class IDSCurrentServerTimePair;
@protocol IDSCurrentServerTimeProvider;

@interface IDSCurrentServerTime : NSObject

@property (retain, nonatomic) id<IDSCurrentServerTimeProvider> serverTimeProvider;
@property (retain) IDSCurrentServerTimePair *timePair;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)initWithServerTimeProvider:(id)a0;
- (void)_storeInitialServerTime;
- (double)currentServerTimeInterval;
- (double)_refreshTimeInterval;
- (void)_refreshServerTime;
- (id)currentServerTimeDate;

@end
