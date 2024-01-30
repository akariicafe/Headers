@class CIImage, NSData, NSNumber;

@interface RAWVignetteTable : RAWFilter {
    CIImage *inputImage;
    NSData *inputVignetteTableData;
    NSNumber *inputVignetteTableDataSize;
    id inputColorSpace;
    CIImage *vigImg;
}

- (void)setValue:(id)a0 forKey:(id)a1;
- (id)outputImage;
- (void).cxx_destruct;
- (BOOL)makeMapImages;

@end
