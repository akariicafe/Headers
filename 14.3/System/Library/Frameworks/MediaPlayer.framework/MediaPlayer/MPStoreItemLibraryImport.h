@class NSArray, MPModelObject;

@interface MPStoreItemLibraryImport : NSObject

@property (readonly, nonatomic) NSArray *importElements;
@property (readonly, nonatomic) BOOL addToCloudLibrary;
@property (readonly, nonatomic) MPModelObject *referralObject;

- (void).cxx_destruct;
- (id)initWithImportElements:(id)a0 usingCloudLibraryDestination:(BOOL)a1;
- (id)initWithImportElements:(id)a0 referralObject:(id)a1 usingCloudLibraryDestination:(BOOL)a2;

@end
