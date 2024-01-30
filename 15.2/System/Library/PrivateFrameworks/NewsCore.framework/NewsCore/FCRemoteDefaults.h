@class FCThreadSafeMutableDictionary;
@protocol FCBackgroundTaskable;

@interface FCRemoteDefaults : NSObject

@property (readonly, weak, nonatomic) id<FCBackgroundTaskable> backgroundTaskable;
@property (readonly, nonatomic) FCThreadSafeMutableDictionary *remoteDefaults;

- (id)dictionaryForKey:(id)a0;
- (id)URLForKey:(id)a0;
- (void)checkForUpdate;
- (id)stringForKey:(id)a0;
- (id)initWithBackgroundTaskable:(id)a0;
- (void)updateRemoteDefaults;
- (void)processResponse:(id)a0 data:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (id)objectForKey:(id)a0;
- (id)URLRequest;
- (BOOL)isAvailable;

@end
