@class FCThreadSafeMutableDictionary;
@protocol FCBackgroundTaskable;

@interface FCRemoteDefaults : NSObject

@property (readonly, weak, nonatomic) id<FCBackgroundTaskable> backgroundTaskable;
@property (readonly, nonatomic) FCThreadSafeMutableDictionary *remoteDefaults;

- (id)URLRequest;
- (id)objectForKey:(id)a0;
- (id)initWithBackgroundTaskable:(id)a0;
- (id)init;
- (void)checkForUpdate;
- (void).cxx_destruct;
- (BOOL)isAvailable;
- (id)stringForKey:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (void)updateRemoteDefaults;
- (void)processResponse:(id)a0 data:(id)a1 error:(id)a2;
- (id)URLForKey:(id)a0;

@end
