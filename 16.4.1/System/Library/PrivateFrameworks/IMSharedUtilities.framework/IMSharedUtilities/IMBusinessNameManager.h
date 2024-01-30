@class NSLock, NSMutableDictionary;

@interface IMBusinessNameManager : NSObject

@property (retain) NSLock *cacheLock;
@property (retain) NSMutableDictionary *cache;
@property (retain) NSMutableDictionary *pendingRequests;

+ (id)sharedInstance;
+ (id)placeholderBusinessName;

- (id)businessNameForUID:(id)a0 updateHandler:(id /* block */)a1;
- (void)_fetchedBrandName:(id)a0 forUID:(id)a1;
- (void)_fetchBusinessNameForUID:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
