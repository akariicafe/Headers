@class NSString;
@protocol GEOUtilityServiceProxy;

@interface GEOUtilityService : NSObject <GEOUtilityServiceProxy> {
    id<GEOUtilityServiceProxy> _proxy;
}

@property (class, readonly, nonatomic) GEOUtilityService *sharedService;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)useProxy:(Class)a0;

- (id)init;
- (void).cxx_destruct;
- (void)getCurrentGeoServicesState:(id)a0 callback:(id /* block */)a1;
- (id)getGeoServicesCacheDirectoryPath;
- (id)getHomeDirectoryPath;

@end
