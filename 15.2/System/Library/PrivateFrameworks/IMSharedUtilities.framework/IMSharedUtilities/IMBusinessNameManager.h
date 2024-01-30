@class NSLock, NSMutableDictionary;

@interface IMBusinessNameManager : NSObject

@property (retain) NSLock *cacheLock;
@property (retain) NSMutableDictionary *cache;
@property (retain) NSMutableDictionary *pendingRequests;

+ (id)sharedInstance;
+ (id)placeholderBusinessName;

- (void)_fetchedBrandName:(id)a0 forUID:(id)a1;
- (id)businessNameForUID:(id)a0 updateHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)_fetchBusinessNameForUID:(id)a0;

@end
