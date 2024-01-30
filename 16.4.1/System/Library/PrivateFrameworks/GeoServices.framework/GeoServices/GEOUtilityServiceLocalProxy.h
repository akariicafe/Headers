@class NSString;

@interface GEOUtilityServiceLocalProxy : NSObject <GEOUtilityServiceProxy>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)getCurrentGeoServicesState:(id)a0 callback:(id /* block */)a1;
- (id)getGeoServicesCacheDirectoryPath;
- (id)getHomeDirectoryPath;

@end
