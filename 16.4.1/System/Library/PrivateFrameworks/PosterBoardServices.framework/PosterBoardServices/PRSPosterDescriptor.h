@class PRSPosterPath, NSString, NSURL;
@protocol BSInvalidatable;

@interface PRSPosterDescriptor : NSObject {
    id<BSInvalidatable> _pathValidityExtension;
}

@property (readonly, nonatomic) PRSPosterPath *_path;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSURL *assetDirectory;

- (id)loadGalleryOptionsWithError:(out id *)a0;
- (id)assetDirectory;
- (id)loadUserInfoWithError:(out id *)a0;
- (id)identifier;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)_initWithPath:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
