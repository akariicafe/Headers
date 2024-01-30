@class PLAssetsdConnectionAuthorization, NSString;

@interface PLAssetsdResourceWriteOnlyService : PLAbstractLibraryServicesManagerService <PLAssetsdResourceWriteOnlyServiceProtocol>

@property (readonly, nonatomic) PLAssetsdConnectionAuthorization *connectionAuthorization;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
