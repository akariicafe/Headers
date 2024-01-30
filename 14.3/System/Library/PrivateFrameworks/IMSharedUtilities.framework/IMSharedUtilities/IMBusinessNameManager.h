@class NSLock, NSMutableDictionary;

@interface IMBusinessNameManager : NSObject

@property (retain) NSLock *cacheLock;
@property (retain) NSMutableDictionary *cache;
@property (retain) NSMutableDictionary *pendingRequests;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)businessNameForUID:(id)a0 updateHandler:(id /* block */)a1;

@end
