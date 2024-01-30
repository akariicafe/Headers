@class NSURLSession, NSDictionary, NSURL, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface CPLConfiguration : NSObject {
    NSURL *_configurationFileURL;
    NSDictionary *_configuration;
    NSDate *_lastUpdate;
    double _updateInterval;
    NSURLSession *_currentSession;
    NSObject<OS_dispatch_queue> *_lock;
}

+ (void)disableConfigurationFetching;

- (void)_save;
- (id)valueForKey:(id)a0;
- (double)_updateInterval;
- (void)refetchFromDisk;
- (void).cxx_destruct;
- (void)check;
- (void)_setContents:(id)a0;
- (id)initWithClientLibraryBaseURL:(id)a0;
- (void)_load;
- (id)objectForKeyedSubscript:(id)a0;

@end
