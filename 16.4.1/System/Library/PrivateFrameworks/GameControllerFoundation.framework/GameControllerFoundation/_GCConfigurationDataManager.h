@class NSString, NSMutableDictionary, NSObject;
@protocol GCServiceProvider, OS_dispatch_workloop;

@interface _GCConfigurationDataManager : NSObject <NSObject> {
    id<GCServiceProvider> _provider;
    NSObject<OS_dispatch_workloop> *_workloop;
    NSMutableDictionary *_locators;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProvider:(id)a0;
- (id)init;
- (id)serviceFor:(id)a0 client:(id)a1;
- (void).cxx_destruct;
- (id)configurationBundleLocatorForType:(id)a0;

@end
