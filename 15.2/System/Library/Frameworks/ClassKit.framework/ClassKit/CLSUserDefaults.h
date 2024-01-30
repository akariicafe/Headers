@class NSObject, CLSEndpointConnection;
@protocol OS_dispatch_queue;

@interface CLSUserDefaults : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) CLSEndpointConnection *endpointConnection;

+ (id)sharedDefaults;
+ (Class)endpointClass;
+ (id)displayNameForDefaultName:(id)a0;

- (id)initWithEndpoint:(id)a0;
- (void).cxx_destruct;
- (id)utilityServer:(id /* block */)a0;
- (id)syncUtilityServer:(id /* block */)a0;
- (void)userDefaultsConfigurationDictionaryWithCompletion:(id /* block */)a0;
- (void)getUserDefaultForDefaultNamed:(id)a0 completion:(id /* block */)a1;
- (void)setUserDefaultValue:(id)a0 forDefaultNamed:(id)a1 completion:(id /* block */)a2;
- (BOOL)userDefaultForDefaultNamed:(id)a0;

@end
