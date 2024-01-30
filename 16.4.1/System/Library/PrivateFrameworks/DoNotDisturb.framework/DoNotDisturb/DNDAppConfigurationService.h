@class NSString;

@interface DNDAppConfigurationService : NSObject {
    NSString *_clientIdentifier;
}

+ (void)initialize;
+ (id)serviceForClientIdentifier:(id)a0;

- (id)_initWithClientIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)getCurrentAppConfigurationForActionIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)invalidateAppContextForActionIdentifier:(id)a0;

@end
