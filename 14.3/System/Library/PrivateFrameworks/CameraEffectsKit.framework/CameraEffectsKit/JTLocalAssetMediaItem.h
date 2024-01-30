@class NSString, NSURL;

@interface JTLocalAssetMediaItem : JFXMediaItem

@property (copy, nonatomic) NSString *localFileName;
@property (retain, nonatomic) NSURL *localFileURL;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)info;
- (id)initWithURL:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithInfo:(id)a0 delegate:(id)a1;
- (BOOL)canSaveToCameraRoll;

@end
