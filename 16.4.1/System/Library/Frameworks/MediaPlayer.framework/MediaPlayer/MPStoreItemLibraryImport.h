@class NSArray, MPModelObject;

@interface MPStoreItemLibraryImport : NSObject

@property (readonly, nonatomic) NSArray *importElements;
@property (readonly, nonatomic) BOOL addToCloudLibrary;
@property (readonly, nonatomic) BOOL addToDeviceLibraryOnly;
@property (readonly, nonatomic) MPModelObject *referralObject;

- (void).cxx_destruct;
- (id)_initWithImportElements:(id)a0 referralObject:(id)a1 usingCloudLibraryDestination:(BOOL)a2 localLibraryDestination:(BOOL)a3;
- (id)initUsingLocalDeviceLibraryDestinationWithImportElements:(id)a0;
- (id)initUsingLocalDeviceLibraryDestinationWithImportElements:(id)a0 referralObject:(id)a1;
- (id)initWithImportElements:(id)a0 referralObject:(id)a1 usingCloudLibraryDestination:(BOOL)a2;
- (id)initWithImportElements:(id)a0 usingCloudLibraryDestination:(BOOL)a1;

@end
