@class NSURL;

@interface GEOMobileAssetResource : NSObject {
    long long _sandboxExtension;
}

@property (readonly, nonatomic) NSURL *fileURL;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0 sandboxExtensionData:(id)a1;
- (void)dealloc;

@end
