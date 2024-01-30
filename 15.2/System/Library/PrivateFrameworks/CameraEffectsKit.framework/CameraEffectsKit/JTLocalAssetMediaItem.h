@class NSString, NSURL;

@interface JTLocalAssetMediaItem : JFXMediaItem

@property (copy, nonatomic) NSString *localFileName;
@property (retain, nonatomic) NSURL *localFileURL;

- (id)initWithURL:(id)a0;
- (id)description;
- (id)info;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithInfo:(id)a0 delegate:(id)a1;
- (BOOL)canSaveToCameraRoll;

@end
