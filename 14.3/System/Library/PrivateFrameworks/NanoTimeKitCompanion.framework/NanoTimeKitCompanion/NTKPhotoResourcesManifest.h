@class NSURL, NSArray, NSString;

@interface NTKPhotoResourcesManifest : NSObject

@property (readonly, nonatomic) NSURL *manifestURL;
@property (readonly, nonatomic) NSArray *imageList;
@property (readonly, nonatomic) NSString *assetCollectionIdentifier;
@property (readonly, nonatomic) long long version;

+ (id)manifestWithResourceDirectoryURL:(id)a0;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (BOOL)_parseManifest;

@end
