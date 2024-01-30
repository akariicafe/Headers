@class NSString;

@interface CKDAssetDirectoryContext : NSObject

@property (retain, nonatomic) NSString *mmcsWorkingDirectory;
@property (retain, nonatomic) NSString *assetDbPath;
@property (retain, nonatomic) NSString *fileStagingPath;
@property (retain, nonatomic) NSString *fileDownloadPath;

- (void).cxx_destruct;

@end
