@class PVImageBuffer;

@interface PVComputeDenseCRF : NSObject {
    PVImageBuffer *_color;
    PVImageBuffer *_proxy;
}

- (void).cxx_destruct;
- (void)generateMatte:(id)a0;
- (id)initWithColor:(id)a0 proximity:(id)a1;

@end
