@class GEOPhotoInfo;

@interface MKMapItemMetadataImageRequest : MKMapItemMetadataRequest

@property (copy, nonatomic) id /* block */ imageHandler;
@property (retain, nonatomic) GEOPhotoInfo *info;

+ (id)requestWithMapItem:(id)a0 info:(id)a1;

- (void)handleError:(id)a0;
- (id)url;
- (void).cxx_destruct;
- (void)handleData:(id)a0;

@end
