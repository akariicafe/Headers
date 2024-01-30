@class NSString, NSDictionary;

@interface PFAuxiliaryImageRecord : NSObject

@property (retain) NSString *identifier;
@property (retain) NSDictionary *auxiliaryImageInfo;
@property struct CGSize { double width; double height; } sourceImageSize;
@property unsigned int sourceImageOrientation;

- (void).cxx_destruct;
- (double)effectiveScaleFactorForDestinationImageSize:(struct CGSize { double x0; double x1; })a0;
- (double)sourceImageSizeMaxLength;

@end
