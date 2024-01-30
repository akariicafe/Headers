@class NSDictionary, NSString, AVCameraCalibrationData;
@protocol NUAuxiliaryImage;

@interface NUCGAuxiliaryImageProperties : NSObject <NUAuxiliaryImageProperties> {
    id _imageSource;
}

@property (retain) NSDictionary *auxCoreGraphicsInfoDictionary;
@property (retain) id<NUAuxiliaryImage> auxImage;
@property (retain) AVCameraCalibrationData *depthCamCalibrationData;
@property (retain) id auxDataInfoMetadata;
@property (readonly) NSString *auxiliaryImageTypeCGIdentifier;
@property struct { long long width; long long height; } size;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)auxiliaryImage:(out id *)a0;
- (id)auxiliaryCoreGraphicsInfoDictionary:(out id *)a0;
- (const struct CGImageMetadata { } *)auxiliaryDataInfoMetadata;
- (id)depthCameraCalibrationData;
- (id)initWithCGProperties:(id)a0 imageSource:(struct CGImageSource { } *)a1;

@end
