@class PyramidStorage_NRF;

@interface FusionInputBands : NSObject {
    PyramidStorage_NRF *bands[5];
}

- (id)init;
- (void).cxx_destruct;
- (void)swapFrame:(int)a0 withFrame:(int)a1;

@end
