@class PyramidStorage_NRF;

@interface FusionInputBands : NSObject {
    PyramidStorage_NRF *bands[5];
}

- (void).cxx_destruct;
- (id)init;
- (void)swapFrame:(int)a0 withFrame:(int)a1;

@end
