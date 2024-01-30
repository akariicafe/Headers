@class NSString, NSArray;

@interface AXPhoenixDataPackager : NSObject

@property (retain, nonatomic) NSString *dataDirectory;
@property (retain, nonatomic) NSArray *allowedFileSuffixes;

- (void).cxx_destruct;
- (id)_archiveDirectory:(id)a0;
- (id)_buildPackageDirectoryNameFromFilename:(id)a0 withMetadata:(id)a1;
- (id)_createPackageDirectory:(id)a0 withPackageDirectoryName:(id)a1;
- (id)_getDataForSubsession:(id)a0;
- (id)initWithFileSuffixes:(id)a0 fromDataDirectory:(id)a1;
- (BOOL)isValidFile:(id)a0;
- (id)packageDataUsingFiles:(id)a0;

@end
