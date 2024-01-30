@class PVImageBuffer;

@interface PVComputeDenseCRF : NSObject {
    PVImageBuffer *_color;
    PVImageBuffer *_proxy;
}

- (void).cxx_destruct;
- (id)initWithColor:(id)a0 proximity:(id)a1;
- (void)generateMatte:(id)a0;

@end
