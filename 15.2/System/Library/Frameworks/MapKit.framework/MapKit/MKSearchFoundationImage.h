@class NSURL, GEOStyleAttribute, NSObject;
@protocol OS_dispatch_group;

@interface MKSearchFoundationImage : SFImage {
    NSObject<OS_dispatch_group> *_group;
    NSURL *_url;
    GEOStyleAttribute *_styleAttribute;
}

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)loadImageDataWithCompletionAndErrorHandler:(id /* block */)a0;
- (id)initIconWithSize:(unsigned long long)a0 mapItem:(id)a1;
- (void)loadImageDataWithCompletionHandler:(id /* block */)a0;

@end
