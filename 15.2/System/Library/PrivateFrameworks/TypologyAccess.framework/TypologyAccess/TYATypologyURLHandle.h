@class NSURL, NSString;

@interface TYATypologyURLHandle : NSObject {
    long long _handle;
}

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *filename;
@property (readonly, nonatomic) BOOL valid;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithURL:(id)a0 sandboxExtensionToken:(id)a1;

@end
