@class NSString, NSDictionary, MSMediaStreamDaemon, MSServerSideConfigProtocol;

@interface MSServerSideConfigManager : NSObject <MSServerSideConfigProtocolDelegate> {
    NSDictionary *_config;
    NSString *_configPath;
    MSServerSideConfigProtocol *_protocol;
    int _state;
}

@property (readonly, nonatomic) NSString *personID;
@property (retain, nonatomic) NSDictionary *config;
@property (nonatomic) MSMediaStreamDaemon *daemon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)longLongValueForParameter:(id)a0 forPersonID:(id)a1 defaultValue:(long long)a2;
+ (void)abortAllActivities;
+ (id)existingConfigManagerForPersonID:(id)a0;
+ (void)forgetPersonID:(id)a0;
+ (id)objectForKey:(id)a0 forPersonID:(id)a1 defaultValue:(id)a2;
+ (int)intValueForParameter:(id)a0 forPersonID:(id)a1 defaultValue:(int)a2;
+ (id)configManagerForPersonID:(id)a0;
+ (double)doubleValueForParameter:(id)a0 forPersonID:(id)a1 defaultValue:(double)a2;
+ (long long)longValueForParameter:(id)a0 forPersonID:(id)a1 defaultValue:(long long)a2;

- (void)abort;
- (void)refreshConfiguration;
- (id)initWithPersonID:(id)a0 baseURL:(id)a1;
- (void)dealloc;
- (void)serverSideConfigProtocol:(id)a0 didFinishWithConfiguration:(id)a1 error:(id)a2;
- (void)serverSideConfigProtocol:(id)a0 didReceiveAuthenticationError:(id)a1;
- (void).cxx_destruct;

@end
