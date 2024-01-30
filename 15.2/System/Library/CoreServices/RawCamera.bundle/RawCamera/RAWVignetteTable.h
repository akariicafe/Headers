@class CIImage, NSData, NSNumber;

@interface RAWVignetteTable : RAWFilter {
    CIImage *inputImage;
    NSData *inputVignetteTableData;
    NSNumber *inputVignetteTableDataSize;
    id inputColorSpace;
    CIImage *vigImg;
}

- (id)outputImage;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (BOOL)makeMapImages;

@end
